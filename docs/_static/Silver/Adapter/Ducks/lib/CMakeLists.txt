
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in ducks dir
INCLUDE_DIRECTORIES(${Ducks_SOURCE_DIR}/include)

# Adds a library called ducks (libducks.a under Linux) from the source files under lib/
ADD_LIBRARY( ducks Duck DuckAdapter MallardDuck Turkey TurkeyAdapter WildTurkey Utilities)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET ducks
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

