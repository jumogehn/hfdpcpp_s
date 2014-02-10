
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Content_SOURCE_DIR}/include)

# Adds a library called content (libcontent.a under Linux) from the source files under lib/
ADD_LIBRARY( content 
  FakeQuack    FlyRocketPowered  ModelDuck  QuackBehavior  Squeak
  DecoyDuck   FlyBehavior  FlyWithWings      MuteQuack  RedHeadDuck    Utilities
  Duck        FlyNoWay     MallardDuck       Quack      RubberDuck )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET content
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

