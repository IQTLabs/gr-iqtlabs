#
# SPDX-License-Identifier: Apache-2.0
#

# ##############################################################################
# Install public header files
# ##############################################################################
if(Vulkan_FOUND)
  install(FILES vkfft.h vkfft_short.h DESTINATION include/gnuradio/iqtlabs)
endif()
install(
  FILES api.h
        tuneable_test_source.h
        retune_fft.h
        write_freq_samples.h
        image_inference.h
        vector_to_json.h
        vector_roll.h
  DESTINATION include/gnuradio/iqtlabs)
