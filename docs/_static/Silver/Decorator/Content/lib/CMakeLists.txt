
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Decorator_SOURCE_DIR}/include)

# Adds a library called decorator (libdecorator.a under Linux) from the source files under lib/
ADD_LIBRARY( decorator 
  Beverage CondimentDecorator Decaf HouseBlend Mocha Utilities DarkRoast Espresso Milk Soy Whip)
  
foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET decorator
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

