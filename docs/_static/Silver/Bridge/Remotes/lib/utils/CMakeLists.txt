
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
include_directories(${Remotes_SOURCE_DIR}/include/utils)

# Adds a library called utils (libutils.a under Linux) from the source files under lib/
add_library( utils Utilities )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET utils
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

install (TARGETS utils DESTINATION bin)
install (FILES ${Remotes_SOURCE_DIR}/include/utils/Utilities.hpp DESTINATION include)

