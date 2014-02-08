
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library menuscustomiterator.
INCLUDE_DIRECTORIES(${MenusCustomIterator_SOURCE_DIR}/include)

# Add binary called "testmenuscustomiterator" that is built from the source file "Menus.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testmenuscustomiterator Menus)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testmenuscustomiterator
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library menuscustomiterator.
TARGET_LINK_LIBRARIES(testmenuscustomiterator menuscustomiterator)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testmenuscustomiterator duck duckadapter mallardduck turkey turkeyadapter wildturkey)

