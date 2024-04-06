#include <iostream>

#include "ShaderLang.h"
#include "libvkfft.h"
#include "utils_VkFFT.h"
#include "vkFFT.h"

const COUNT_T kVkNumBuf = 1;
// sample_id must always be 0 for Pi4 compatibility.
const COUNT_T sample_id = 0;
static VkGPU vkGPU = {};
static VkFFTConfiguration vkConfiguration = {};
static VkDeviceMemory *vkBufferDeviceMemory = NULL;
static VkFFTApplication vkApp = {};
static VkFFTLaunchParams vkLaunchParams = {};
static VkBuffer stagingBuffer = {0};
static VkDeviceMemory stagingBufferMemory = {0};
static COUNT_T fftBufferSize = 0;
static COUNT_T stagingBufferSize = 0;
static bool _shift = false;

VkFFTResult _setupCopy(VkCommandBuffer &commandBuffer,
                       VkBufferCopy &copyRegion) {
  VkResult res = VK_SUCCESS;
  copyRegion.srcOffset = 0;
  copyRegion.dstOffset = 0;
  copyRegion.size = stagingBufferSize;
  VkCommandBufferAllocateInfo commandBufferAllocateInfo = {
      VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
  commandBufferAllocateInfo.commandPool = vkGPU.commandPool;
  commandBufferAllocateInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
  commandBufferAllocateInfo.commandBufferCount = 1;
  res = vkAllocateCommandBuffers(vkGPU.device, &commandBufferAllocateInfo,
                                 &commandBuffer);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_ALLOCATE_COMMAND_BUFFERS;
  VkCommandBufferBeginInfo commandBufferBeginInfo = {
      VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
  commandBufferBeginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
  res = vkBeginCommandBuffer(commandBuffer, &commandBufferBeginInfo);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_BEGIN_COMMAND_BUFFER;
  return VKFFT_SUCCESS;
}

VkFFTResult _runCopy(VkCommandBuffer &commandBuffer) {
  VkResult res = vkEndCommandBuffer(commandBuffer);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_END_COMMAND_BUFFER;
  VkSubmitInfo submitInfo = {VK_STRUCTURE_TYPE_SUBMIT_INFO};
  submitInfo.commandBufferCount = 1;
  submitInfo.pCommandBuffers = &commandBuffer;
  res = vkQueueSubmit(vkGPU.queue, 1, &submitInfo, vkGPU.fence);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_SUBMIT_QUEUE;
  res = vkWaitForFences(vkGPU.device, 1, &vkGPU.fence, VK_TRUE, 100000000000);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_WAIT_FOR_FENCES;
  res = vkResetFences(vkGPU.device, 1, &vkGPU.fence);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_FAILED_TO_RESET_FENCES;
  vkFreeCommandBuffers(vkGPU.device, vkGPU.commandPool, 1, &commandBuffer);
  return VKFFT_SUCCESS;
}

VkFFTResult _transferDataFromCPU(char *cpu_arr) {
  VkResult res = VK_SUCCESS;
  VkBuffer *buffer = &vkConfiguration.buffer[0];
  char *data;
  res = vkMapMemory(vkGPU.device, stagingBufferMemory, 0, stagingBufferSize, 0,
                    (void **)&data);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_MALLOC_FAILED;
  memcpy(data, cpu_arr, stagingBufferSize);
  vkUnmapMemory(vkGPU.device, stagingBufferMemory);
  VkCommandBuffer commandBuffer = {0};
  VkBufferCopy copyRegion = {0};
  VkFFTResult setup_res = _setupCopy(commandBuffer, copyRegion);
  if (setup_res != VKFFT_SUCCESS) {
    return setup_res;
  }
  vkCmdCopyBuffer(commandBuffer, stagingBuffer, buffer[0], 1, &copyRegion);
  return _runCopy(commandBuffer);
}

VkFFTResult _transferDataToCPU(char *cpu_arr) {
  // a function that transfers data from the GPU to the CPU using staging
  // buffer, because the GPU memory is not host-coherent
  VkResult res = VK_SUCCESS;
  VkBuffer *buffer = &vkConfiguration.buffer[0];
  VkCommandBuffer commandBuffer = {0};
  VkBufferCopy copyRegion = {0};
  VkFFTResult setup_res = _setupCopy(commandBuffer, copyRegion);
  if (setup_res != VKFFT_SUCCESS) {
    return setup_res;
  }
  vkCmdCopyBuffer(commandBuffer, buffer[0], stagingBuffer, 1, &copyRegion);
  VkFFTResult copy_res = _runCopy(commandBuffer);
  if (copy_res != VKFFT_SUCCESS) {
    return copy_res;
  }
  char *data;
  res = vkMapMemory(vkGPU.device, stagingBufferMemory, 0, stagingBufferSize, 0,
                    (void **)&data);
  if (res != VK_SUCCESS)
    return VKFFT_ERROR_MALLOC_FAILED;
  if (_shift) {
    const COUNT_T halfFftBufferSize = fftBufferSize / 2;
    for (int i = 0; i < vkConfiguration.numberBatches;
         ++i, cpu_arr += fftBufferSize, data += fftBufferSize) {
      memcpy(cpu_arr + halfFftBufferSize, data, halfFftBufferSize);
      memcpy(cpu_arr, data + halfFftBufferSize, halfFftBufferSize);
    }
  } else {
    memcpy(cpu_arr, data, stagingBufferSize);
  }
  vkUnmapMemory(vkGPU.device, stagingBufferMemory);
  return VKFFT_SUCCESS;
}

int64_t init_vkfft(COUNT_T batches, COUNT_T nfft, COUNT_T sample_size,
                   bool shift) {
  vkGPU.enableValidationLayers = 0;

  VkResult res = VK_SUCCESS;
  res = createInstance(&vkGPU, sample_id);
  if (res) {
    std::cerr << "VKFFT_ERROR_FAILED_TO_CREATE_INSTANCE" << std::endl;
    return VKFFT_ERROR_FAILED_TO_CREATE_INSTANCE;
  }
  res = setupDebugMessenger(&vkGPU);
  if (res != 0) {
    // printf("Debug messenger creation failed, error code: %" PRIu64 "\n",
    // res);
    return VKFFT_ERROR_FAILED_TO_SETUP_DEBUG_MESSENGER;
  }
  res = findPhysicalDevice(&vkGPU);
  if (res != 0) {
    // printf("Physical device not found, error code: %" PRIu64 "\n", res);
    return VKFFT_ERROR_FAILED_TO_FIND_PHYSICAL_DEVICE;
  }
  res = createDevice(&vkGPU, sample_id);
  if (res != 0) {
    // printf("Device creation failed, error code: %" PRIu64 "\n", res);
    return VKFFT_ERROR_FAILED_TO_CREATE_DEVICE;
  }
  res = createFence(&vkGPU);
  if (res != 0) {
    // printf("Fence creation failed, error code: %" PRIu64 "\n", res);
    return VKFFT_ERROR_FAILED_TO_CREATE_FENCE;
  }
  res = createCommandPool(&vkGPU);
  if (res != 0) {
    // printf("Fence creation failed, error code: %" PRIu64 "\n", res);
    return VKFFT_ERROR_FAILED_TO_CREATE_COMMAND_POOL;
  }
  vkGetPhysicalDeviceProperties(vkGPU.physicalDevice,
                                &vkGPU.physicalDeviceProperties);
  vkGetPhysicalDeviceMemoryProperties(vkGPU.physicalDevice,
                                      &vkGPU.physicalDeviceMemoryProperties);

  glslang_initialize_process(); // compiler can be initialized before VkFFT

  vkConfiguration.FFTdim = 1;
  vkConfiguration.size[0] = nfft;
  vkConfiguration.size[1] = 1;
  vkConfiguration.size[2] = 1;
  vkConfiguration.device = &vkGPU.device;
  vkConfiguration.queue = &vkGPU.queue;
  vkConfiguration.fence = &vkGPU.fence;
  vkConfiguration.commandPool = &vkGPU.commandPool;
  vkConfiguration.physicalDevice = &vkGPU.physicalDevice;
  vkConfiguration.isCompilerInitialized = true;
  vkConfiguration.doublePrecision = false;
  vkConfiguration.numberBatches = batches;
  fftBufferSize = nfft * sample_size;
  stagingBufferSize = fftBufferSize * vkConfiguration.numberBatches;
  _shift = shift;

  std::cerr << "using vkFFT batch size " << vkConfiguration.numberBatches
            << " on " << vkGPU.physicalDeviceProperties.deviceName
            << " with shift: " << _shift << std::endl;

  vkConfiguration.bufferSize =
      (COUNT_T *)aligned_alloc(sizeof(COUNT_T), sizeof(COUNT_T) * kVkNumBuf);
  if (!vkConfiguration.bufferSize)
    return VKFFT_ERROR_MALLOC_FAILED;

  const COUNT_T buffer_size_f =
      vkConfiguration.size[0] * vkConfiguration.size[1] *
      vkConfiguration.size[2] * vkConfiguration.numberBatches / kVkNumBuf;
  for (COUNT_T i = 0; i < kVkNumBuf; ++i) {
    vkConfiguration.bufferSize[i] = (COUNT_T)sample_size * buffer_size_f;
  }

  vkConfiguration.bufferNum = kVkNumBuf;

  vkConfiguration.buffer =
      (VkBuffer *)aligned_alloc(sample_size, kVkNumBuf * sizeof(VkBuffer));
  if (!vkConfiguration.buffer)
    return VKFFT_ERROR_MALLOC_FAILED;
  vkBufferDeviceMemory = (VkDeviceMemory *)aligned_alloc(
      sample_size, kVkNumBuf * sizeof(VkDeviceMemory));
  if (!vkBufferDeviceMemory)
    return VKFFT_ERROR_MALLOC_FAILED;

  for (COUNT_T i = 0; i < kVkNumBuf; ++i) {
    vkConfiguration.buffer[i] = {};
    vkBufferDeviceMemory[i] = {};
    VkFFTResult resFFT = allocateBuffer(
        &vkGPU, &vkConfiguration.buffer[i], &vkBufferDeviceMemory[i],
        VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_SRC_BIT |
            VK_BUFFER_USAGE_TRANSFER_DST_BIT,
        VK_MEMORY_HEAP_DEVICE_LOCAL_BIT, vkConfiguration.bufferSize[i]);
    if (resFFT != VKFFT_SUCCESS)
      return VKFFT_ERROR_MALLOC_FAILED;
  }

  vkLaunchParams.buffer = vkConfiguration.buffer;

  VkFFTResult resFFT = initializeVkFFT(&vkApp, vkConfiguration);
  if (resFFT != VKFFT_SUCCESS)
    return resFFT;

  resFFT = allocateBuffer(&vkGPU, &stagingBuffer, &stagingBufferMemory,
                          VK_BUFFER_USAGE_STORAGE_BUFFER_BIT |
                              VK_BUFFER_USAGE_TRANSFER_SRC_BIT |
                              VK_BUFFER_USAGE_TRANSFER_DST_BIT,
                          VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT |
                              VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                          stagingBufferSize);
  if (resFFT != VKFFT_SUCCESS)
    return VKFFT_ERROR_MALLOC_FAILED;

  return VKFFT_SUCCESS;
}

void free_vkfft() {
  vkDestroyBuffer(vkGPU.device, stagingBuffer, NULL);
  vkFreeMemory(vkGPU.device, stagingBufferMemory, NULL);
  for (COUNT_T i = 0; i < kVkNumBuf; i++) {
    vkDestroyBuffer(vkGPU.device, vkConfiguration.buffer[i], NULL);
    vkFreeMemory(vkGPU.device, vkBufferDeviceMemory[i], NULL);
  }
  free(vkConfiguration.buffer);
  free(vkBufferDeviceMemory);
  free(vkConfiguration.bufferSize);
  deleteVkFFT(&vkApp);
  vkDestroyFence(vkGPU.device, vkGPU.fence, NULL);
  vkDestroyCommandPool(vkGPU.device, vkGPU.commandPool, NULL);
  vkDestroyDevice(vkGPU.device, NULL);
  DestroyDebugUtilsMessengerEXT(&vkGPU, NULL);
  vkDestroyInstance(vkGPU.instance, NULL);
  glslang_finalize_process();
}

void vkfft_offload(char *in, char *out) {
  _transferDataFromCPU(in);
  performVulkanFFT(&vkGPU, &vkApp, &vkLaunchParams, -1, 1);
  _transferDataToCPU(out);
}
