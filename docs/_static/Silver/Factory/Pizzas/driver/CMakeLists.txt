
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library pizzas.
INCLUDE_DIRECTORIES(${Pizzas_SOURCE_DIR}/include)

# Add binary called "testpizzas" that is built from the source file "Pizzas.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testpizzas Pizzas)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testpizzas
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library pizzas.
TARGET_LINK_LIBRARIES(testpizzas pizzas)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testpizzas duck duckadapter mallardduck turkey turkeyadapter wildturkey)

