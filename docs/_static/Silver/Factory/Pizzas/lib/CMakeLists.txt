
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Pizzas_SOURCE_DIR}/include)

# Adds a library called pizzas (libpizzas.a under Linux) from the source files under lib/
ADD_LIBRARY( pizzas ClamPizza Pizza SimplePizzaFactory VeggiePizza CheesePizza PepperoniPizza PizzaStore Utilities )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET pizzas
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

