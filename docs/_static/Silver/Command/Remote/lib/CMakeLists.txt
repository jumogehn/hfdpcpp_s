
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Remote_SOURCE_DIR}/include)

# Adds a library called remote (libremote.a under Linux) from the source files under lib/
ADD_LIBRARY( remote CeilingFan CeilingFanOffCommand CeilingFanOnCommand Command GarageDoor GarageDoorDownCommand GarageDoorUpCommand Hottub HottubOffCommand HottubOnCommand Light LightOffCommand LightOnCommand LivingroomLightOffCommand LivingroomLightOnCommand NoCommand RemoteControl Stereo StereoOffCommand StereoOnWithCDCommand TV Utilities)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET remote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

#ADD_LIBRARY( duck Duck )
#ADD_LIBRARY( duckadapter DuckAdapter )
#ADD_LIBRARY( mallardduck MallardDuck )
#ADD_LIBRARY( turkey Turkey )
#ADD_LIBRARY( turkeyadapter TurkeyAdapter )
#ADD_LIBRARY( wildturkey WildTurkey )

