
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library gumballstatewinner.
INCLUDE_DIRECTORIES(${GumballStateWinner_SOURCE_DIR}/include)

# Add binary called "testgumballstatewinner" that is built from the source file "GumballStateWinner.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testgumballstatewinner GumballStateWinner)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testgumballstatewinner
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library gumballstatewinner.
TARGET_LINK_LIBRARIES(testgumballstatewinner gumballstatewinner)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testgumballstatewinner duck duckadapter mallardduck turkey turkeyadapter wildturkey)

