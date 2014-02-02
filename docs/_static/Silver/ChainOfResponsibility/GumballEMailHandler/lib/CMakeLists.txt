
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${GumballEMailHandler_SOURCE_DIR}/include)

# Adds a library called handlers (libhandlers.a under Linux) from the source files under lib/
ADD_LIBRARY( handlers Client ComplaintHandler FanHandler Handler LastHandler NewLocationHandler SpamHandler Utilities)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET handlers
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

