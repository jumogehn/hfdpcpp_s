
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Pizzaaf_SOURCE_DIR}/include)

# Adds a library called pizzaaf (libpizzaaf.a under Linux) from the source files under lib/
ADD_LIBRARY( pizzaaf 
  BlackOlives Dough NYPizzaIngredientFactory PizzaStore ThinCrustDough
  EggPlant NYPizzaStore PlumTomatoSauce Utilities
  Cheese FreshClams Onion RedPepper VeggiePizza
  CheesePizza FrozenClams ParmesanCheese ReggianoCheese Veggies
  ChicagoPizzaIngredientFactory Garlic Pepperoni Sauce
  ChicagoPizzaStore MarinaraSauce PepperoniPizza SlicedPepperoni
  ClamPizza MozzarellaCheese Pizza Spinach
  Clams Mushroom PizzaIngredientFactory ThickCrustDough )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET pizzaaf
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

