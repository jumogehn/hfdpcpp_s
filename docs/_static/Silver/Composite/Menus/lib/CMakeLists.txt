
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Menus_SOURCE_DIR}/include)

# Adds a library called menus (libmenus.a under Linux) from the source files under lib/
ADD_LIBRARY( menus Menu MenuComponent MenuItem UnsupportedOperationException Utilities Waitress )
  
foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET menus
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

