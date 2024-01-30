#
# SPDX-License-Identifier: Apache-2.0
#

install(
  FILES iqtlabs_image_inference.block.yml
        iqtlabs_iq_inference.block.yml
        iqtlabs_retune_fft.block.yml
        iqtlabs_retune_pre_fft.block.yml
        iqtlabs_tuneable_test_source.block.yml
        iqtlabs_vector_roll.block.yml
        iqtlabs_vector_to_json.block.yml
        iqtlabs_write_freq_samples.block.yml
  DESTINATION share/gnuradio/grc/blocks)
if(Vulkan_FOUND)
  install(FILES iqtlabs_vkfft.block.yml iqtlabs_vkfft_short.block.yml
          DESTINATION share/gnuradio/grc/blocks)
endif()
