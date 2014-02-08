
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${MenusCustomIterator_SOURCE_DIR}/include)

# Adds a library called menuscustomiterator (libmenuscustomiterator.a under Linux) from the source files under lib/
ADD_LIBRARY( menuscustomiterator 
  Menu MenuItem UnsupportedOperationException Waitress MenuComponent MenuIterator Utilities )
  
foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET menuscustomiterator
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

