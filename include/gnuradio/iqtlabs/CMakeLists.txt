#
# SPDX-License-Identifier: Apache-2.0
#

# ##############################################################################
# Install public header files
# ##############################################################################
install(
  FILES api.h
        image_inference.h
        iq_inference.h
        retune_fft.h
        retune_pre_fft.h
        tuneable_test_source.h
        vector_roll.h
        vector_to_json.h
        write_freq_samples.h
        iq_inference_standalone.h
  DESTINATION include/gnuradio/iqtlabs)

if(Vulkan_FOUND)
  install(FILES vkfft.h vkfft_short.h iq_inference.h
          DESTINATION include/gnuradio/iqtlabs)
endif()
