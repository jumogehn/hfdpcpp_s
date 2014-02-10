
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${GumballStateWinner_SOURCE_DIR}/include)

# Adds a library called gumballstatewinner (libgumballstatewinner.a under Linux) from the source files under lib/
ADD_LIBRARY( gumballstatewinner HasQuarterState SoldOutState State WinnerState GumballMachine NoQuarterState SoldState Utilities )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET gumballstatewinner
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

