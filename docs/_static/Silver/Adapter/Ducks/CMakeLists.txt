
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf
#http://pageant.ghulbus.eu/?p=664

cmake_minimum_required(VERSION 2.8.6)

project (Ducks)

# The version number.
set (Ducks_VERSION_MAJOR 1)
set (Ducks_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/DucksConfig.h.in"
  "${PROJECT_BINARY_DIR}/DucksConfig.h"
        )

# add the binary tree to the search path for include files
# so that we will find DucksConfig.h
include_directories("${PROJECT_BINARY_DIR}")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}")
include(../../check11features/CheckCXX11Features.cmake)

# GCC specifics
if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -std=c++0x")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb")
endif()
# Visual Studio specifics
if(MSVC)
  # Warning Level 4 for Debug builds
  list(APPEND CMAKE_CXX_FLAGS_DEBUG " /W4")
  list(REMOVE_DUPLICATES CMAKE_CXX_FLAGS_DEBUG)
endif()

ADD_SUBDIRECTORY(driver)
ADD_SUBDIRECTORY(lib)
