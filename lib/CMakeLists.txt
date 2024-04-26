#
# SPDX-License-Identifier: Apache-2.0
#

# ##############################################################################
# Setup library
# ##############################################################################
include(GrPlatform) # define LIB_SUFFIX

set(SRC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")

list(
  APPEND
  iqtlabs_sources
  base_impl.cc
  torchserve_client.cc
  image_inference_impl.cc
  iq_inference_impl.cc
  iq_inference_standalone_impl.cc
  retune_fft_impl.cc
  retune_pre_fft_impl.cc
  retuner_impl.cc
  tuneable_test_source_impl.cc
  vector_roll_impl.cc
  vector_to_json_impl.cc
  write_freq_samples_impl.cc)

if(VKFFT)
  set(VKFFT_LIB
      -Wl,--whole-archive
      ${SRC_ROOT}/VkFFT/build/glslang-main/glslang/libglslang.a
      ${SRC_ROOT}/VkFFT/build/glslang-main/glslang/libGenericCodeGen.a
      ${SRC_ROOT}/VkFFT/build/glslang-main/glslang/libMachineIndependent.a
      ${SRC_ROOT}/VkFFT/build/glslang-main/glslang/OSDependent/Unix/libOSDependent.a
      ${SRC_ROOT}/VkFFT/build/glslang-main/OGLCompilersDLL/libOGLCompiler.a
      ${SRC_ROOT}/VkFFT/build/glslang-main/SPIRV/libSPIRV.a
      ${SRC_ROOT}/VkFFT/build/CMakeFiles/VkFFT_TestSuite.dir/benchmark_scripts/vkFFT_scripts/src/utils_VkFFT.cpp.o
      -Wl,--no-whole-archive
      ${Vulkan_LIBRARIES}
      ${UHD_LIBRARIES})
  set(VKFFT_INCLUDES
      PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/>
      PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../VkFFT/vkFFT>
      PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../VkFFT/glslang-main/glslang/Include>
      PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../VkFFT/glslang-main/glslang/Public>
      PUBLIC
      $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../VkFFT/benchmark_scripts/vkFFT_scripts/include>
  )
  list(APPEND iqtlabs_sources libvkfft.cc vkfft_impl.cc vkfft_short_impl.cc)
endif()

set(iqtlabs_sources
    "${iqtlabs_sources}"
    PARENT_SCOPE)
if(NOT iqtlabs_sources)
  message(STATUS "No C++ sources... skipping lib/")
  return()
endif(NOT iqtlabs_sources)

add_library(gnuradio-iqtlabs SHARED ${iqtlabs_sources})
target_link_libraries(
  gnuradio-iqtlabs
  ${VKFFT_LIB}
  ${Boost_LIBRARIES}
  ${OpenCV_LIBS}
  nlohmann_json::nlohmann_json
  libsigmf::libsigmf
  gnuradio::gnuradio-runtime)

target_include_directories(
  gnuradio-iqtlabs ${VKFFT_INCLUDES}
  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
  PUBLIC $<INSTALL_INTERFACE:include>)
set_target_properties(gnuradio-iqtlabs PROPERTIES DEFINE_SYMBOL
                                                  "gnuradio_iqtlabs_EXPORTS")

if(APPLE)
  set_target_properties(
    gnuradio-iqtlabs PROPERTIES INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib")
endif(APPLE)

# ##############################################################################
# Install built library files
# ##############################################################################
include(GrMiscUtils)
gr_library_foo(gnuradio-iqtlabs)

# ##############################################################################
# Print summary
# ##############################################################################
message(STATUS "Using install prefix: ${CMAKE_INSTALL_PREFIX}")
message(STATUS "Building for version: ${VERSION} / ${LIBVER}")
