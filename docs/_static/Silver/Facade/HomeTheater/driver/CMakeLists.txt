
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library hometheater.
INCLUDE_DIRECTORIES(${HomeTheater_SOURCE_DIR}/include)

# Add binary called "testhometheater" that is built from the source file "HomeTheater.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testhometheater HomeTheater)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testhometheater
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library hometheater.
TARGET_LINK_LIBRARIES(testhometheater hometheater)

