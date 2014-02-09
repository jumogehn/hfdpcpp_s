
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Pizzafm_SOURCE_DIR}/include)

# Adds a library called pizzafm (libpizzafm.a under Linux) from the source files under lib/
ADD_LIBRARY( pizzafm 
  ChicagoStyleClamPizza NYPizzaStore NYStylePepperoniPizza PizzaStore
  ChicagoPizzaStore ChicagoStylePepperoniPizza NYStyleCheesePizza NYStyleVeggiePizza
  ChicagoStyleCheesePizza ChicagoStyleVeggiePizza NYStyleClamPizza Pizza Utilities )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET pizzafm
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

