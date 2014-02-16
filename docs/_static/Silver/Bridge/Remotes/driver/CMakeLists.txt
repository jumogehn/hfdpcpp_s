
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library remotes.
include_directories(${Remotes_SOURCE_DIR}/include/remotes)
if (USE_UTILS)
  include_directories(${Remotes_SOURCE_DIR}/include/utils)
endif (USE_UTILS)

# Add binary called "testremotes" that is built from the source file "Remotes.cpp". 
# The extension is automatically found.
add_executable(testremotes Remotes)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testremotes
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library remotes.
target_link_libraries(testremotes remotes)
if (USE_UTILS)
  target_link_libraries(testremotes utils)
endif (USE_UTILS)

# add the install targets
install (TARGETS testremotes DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/RemotesConfig.h" DESTINATION include)

