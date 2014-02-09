
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library pizzaaf.
INCLUDE_DIRECTORIES(${Pizzaaf_SOURCE_DIR}/include)

# Add binary called "testpizzaaf" that is built from the source file "Pizzaaf.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testpizzaaf Pizzaaf)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testpizzaaf
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library pizzaaf.
TARGET_LINK_LIBRARIES(testpizzaaf pizzaaf)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testpizzaaf duck duckadapter mallardduck turkey turkeyadapter wildturkey)

