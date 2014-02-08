
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library undo.
INCLUDE_DIRECTORIES(${Undo_SOURCE_DIR}/include)

# Add binary called "testundo" that is built from the source file "Undo.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testundo Undo)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testundo
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library undo.
TARGET_LINK_LIBRARIES(testundo undo)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testundo duck duckadapter mallardduck turkey turkeyadapter wildturkey)

