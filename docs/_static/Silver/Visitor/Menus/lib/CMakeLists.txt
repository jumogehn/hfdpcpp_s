
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Menus_SOURCE_DIR}/include)

# Adds a library called menus (libmenus.a under Linux) from the source files under lib/
ADD_LIBRARY( menus 
  Bacon        HotDog      MenuComponent        Pancake          Sausage     Toast
  Bagel        Cheese      Ingredient           Pasta            Scrambled   Tomato
  Beef         Chicken     IngredientDecorator  MenuItem         Potato      Soup        Utilities
  BlueBerries  Egg         Lettus               Milk             Rice        Steamed     Visitor
  Bread        Fish        Mayonnaise           MixedVegetables  Salad       Stock       Waitress
  Butter       Fried       Menu                 Oil              Sauerkraut  Substitute )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET menus
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

