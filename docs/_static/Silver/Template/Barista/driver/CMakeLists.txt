
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library barista.
INCLUDE_DIRECTORIES(${Barista_SOURCE_DIR}/include)

# Add binary called "testbarista" that is built from the source file "Barista.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testbarista Barista)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testbarista
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library barista.
TARGET_LINK_LIBRARIES(testbarista barista)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testbarista duck duckadapter mallardduck turkey turkeyadapter wildturkey)

