
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library simpleremote.
INCLUDE_DIRECTORIES(${SimpleRemote_SOURCE_DIR}/include)

# Add binary called "testsimpleremote" that is built from the source file "SimpleRemote.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testsimpleremote SimpleRemote)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testsimpleremote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library simpleremote.
TARGET_LINK_LIBRARIES(testsimpleremote simpleremote)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testsimpleremote duck duckadapter mallardduck turkey turkeyadapter wildturkey)

