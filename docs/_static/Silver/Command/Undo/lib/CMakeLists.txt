
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Undo_SOURCE_DIR}/include)

# Adds a library called undo (libundo.a under Linux) from the source files under lib/
ADD_LIBRARY( undo 
  CeilingFanMediumCommand DimmerLightOnCommand NoCommand
  CeilingFan CeilingFanOffCommand Light RemoteControlWithUndo
  CeilingFanHighCommand Command LightOffCommand Utilities
  CeilingFanLowCommand DimmerLightOffCommand LightOnCommand )
  
foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET undo
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

