
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Chocolate_SOURCE_DIR}/include)

# Adds a library called chocolate (libchocolate.a under Linux) from the source files under lib/
ADD_LIBRARY( chocolate ChocolateBoiler )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET chocolate
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

