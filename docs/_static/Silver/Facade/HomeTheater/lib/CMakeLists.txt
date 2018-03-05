
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in hometheater dir
INCLUDE_DIRECTORIES(${HomeTheater_SOURCE_DIR}/include)

# Adds a library called hometheater (libhometheater.a under Linux) from the source files under lib/
ADD_LIBRARY( hometheater Amplifier CdPlayer DvdPlayer HomeTheaterFacade PopcornPopper Projector Screen TheaterLights Tuner)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET hometheater
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

