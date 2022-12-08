find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_IQTLABS gnuradio-iqtlabs)

FIND_PATH(
    GR_IQTLABS_INCLUDE_DIRS
    NAMES gnuradio/iqtlabs/api.h
    HINTS $ENV{IQTLABS_DIR}/include
        ${PC_IQTLABS_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_IQTLABS_LIBRARIES
    NAMES gnuradio-iqtlabs
    HINTS $ENV{IQTLABS_DIR}/lib
        ${PC_IQTLABS_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-iqtlabsTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_IQTLABS DEFAULT_MSG GR_IQTLABS_LIBRARIES GR_IQTLABS_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_IQTLABS_LIBRARIES GR_IQTLABS_INCLUDE_DIRS)
