#
# SPDX-License-Identifier: Apache-2.0
#

########################################################################
# Include python install macros
########################################################################
include(GrPython)
if(NOT PYTHONINTERP_FOUND)
    return()
endif()

add_subdirectory(bindings)

########################################################################
# Install python sources
########################################################################
GR_PYTHON_INSTALL(
    FILES
    __init__.py
    DESTINATION ${GR_PYTHON_DIR}/gnuradio/iqtlabs
)

########################################################################
# Handle the unit tests
########################################################################
include(GrTest)

set(GR_TEST_TARGET_DEPS gnuradio-iqtlabs)

# Create a package directory that tests can import. It includes everything
# from `python/`.
add_custom_target(
  copy_module_for_tests ALL
  COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}
          ${CMAKE_BINARY_DIR}/test_modules/gnuradio/iqtlabs/
)
if(VKFFT)
GR_ADD_TEST(qa_vkfft ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_vkfft.py)
GR_ADD_TEST(qa_vkfft_short ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_vkfft_short.py)
endif()
GR_ADD_TEST(qa_tuneable_test_source ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_tuneable_test_source.py)
GR_ADD_TEST(qa_retune_fft ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_retune_fft.py)
GR_ADD_TEST(qa_write_freq_samples ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_write_freq_samples.py)
GR_ADD_TEST(qa_image_inference ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_image_inference.py)
GR_ADD_TEST(qa_vector_to_json ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_vector_to_json.py)
GR_ADD_TEST(qa_iq_inference ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/qa_iq_inference.py)
