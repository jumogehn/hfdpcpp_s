cmake_minimum_required (VERSION 2.6)
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

# add the executable
add_executable(Ducks Ducks.cpp)
