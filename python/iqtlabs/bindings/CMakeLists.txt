#
# SPDX-License-Identifier: Apache-2.0
#

########################################################################
# Check if there is C++ code at all
########################################################################
if(NOT iqtlabs_sources)
    MESSAGE(STATUS "No C++ sources... skipping python bindings")
    return()
endif(NOT iqtlabs_sources)

########################################################################
# Check for pygccxml
########################################################################
GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )

include(GrPybind)

########################################################################
# Python Bindings
########################################################################

if(VKFFT)
    add_compile_definitions(HAVE_VULKAN)
    list(APPEND iqtlabs_python_files vkfft_python.cc vkfft_short_python.cc)
endif()

list(APPEND iqtlabs_python_files
    tuneable_test_source_python.cc
    retune_fft_python.cc
    write_freq_samples_python.cc
    image_inference_python.cc
    vector_to_json_python.cc
    vector_roll_python.cc
    retune_pre_fft_python.cc
    iq_inference_python.cc python_bindings.cc)

GR_PYBIND_MAKE_OOT(iqtlabs
   ../../..
   gr::iqtlabs
   "${iqtlabs_python_files}")

# copy in bindings .so file for use in QA test module
add_custom_target(
  copy_bindings_for_tests ALL
  COMMAND
    ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_BINARY_DIR}/*.so"
    ${CMAKE_BINARY_DIR}/test_modules/gnuradio/iqtlabs/
  DEPENDS iqtlabs_python)

install(TARGETS iqtlabs_python DESTINATION ${GR_PYTHON_DIR}/gnuradio/iqtlabs COMPONENT pythonapi)
