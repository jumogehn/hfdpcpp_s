
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library ducks.
INCLUDE_DIRECTORIES(${Ducks_SOURCE_DIR}/include)

# Add binary called "testducks" that is built from the source file "main.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testducks main)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testducks
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library ducks.
TARGET_LINK_LIBRARIES(testducks ducks)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testducks duck duckadapter mallardduck turkey turkeyadapter wildturkey)

