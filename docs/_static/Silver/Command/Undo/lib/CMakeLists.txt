
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${SimpleRemote_SOURCE_DIR}/include)

# Adds a library called simpleremote (libsimpleremote.a under Linux) from the source files under lib/
ADD_LIBRARY( simpleremote GarageDoor Light LightOnCommand Utilities Command GarageDoorOpenCommand LightOffCommand SimpleRemoteControl )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET simpleremote
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

