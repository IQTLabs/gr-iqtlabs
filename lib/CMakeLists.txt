#
# SPDX-License-Identifier: Apache-2.0
#

########################################################################
# Setup library
########################################################################
include(GrPlatform) #define LIB_SUFFIX

list(APPEND iqtlabs_sources
    tuneable_test_source_impl.cc
    retune_fft_impl.cc
)

set(iqtlabs_sources "${iqtlabs_sources}" PARENT_SCOPE)
if(NOT iqtlabs_sources)
    MESSAGE(STATUS "No C++ sources... skipping lib/")
    return()
endif(NOT iqtlabs_sources)

add_library(gnuradio-iqtlabs SHARED ${iqtlabs_sources})
target_link_libraries(gnuradio-iqtlabs ${Boost_LIBRARIES} gnuradio::gnuradio-runtime )
target_include_directories(gnuradio-iqtlabs
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
    PUBLIC $<INSTALL_INTERFACE:include>
  )
set_target_properties(gnuradio-iqtlabs PROPERTIES DEFINE_SYMBOL "gnuradio_iqtlabs_EXPORTS")

if(APPLE)
    set_target_properties(gnuradio-iqtlabs PROPERTIES
        INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib"
    )
endif(APPLE)

########################################################################
# Install built library files
########################################################################
include(GrMiscUtils)
GR_LIBRARY_FOO(gnuradio-iqtlabs)

########################################################################
# Print summary
########################################################################
message(STATUS "Using install prefix: ${CMAKE_INSTALL_PREFIX}")
message(STATUS "Building for version: ${VERSION} / ${LIBVER}")
