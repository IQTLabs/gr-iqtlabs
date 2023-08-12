#
# SPDX - License - Identifier : Apache - 2.0
#

# ##############################################################################
# Install public header files
# ##############################################################################

install(
  FILES api.h
        tuneable_test_source.h
        retune_fft.h
        write_freq_samples
        .h
        image_inference.h
        vector_to_json.h
  DESTINATION "include/gnuradio/iqtlabs")
