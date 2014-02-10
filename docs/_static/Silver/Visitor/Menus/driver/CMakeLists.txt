
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library menus.
INCLUDE_DIRECTORIES(${Menus_SOURCE_DIR}/include)

# Add binary called "testmenus" that is built from the source file "Menus.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testmenus Menus)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testmenus
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library menus.
TARGET_LINK_LIBRARIES(testmenus menus)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testmenus duck duckadapter mallardduck turkey turkeyadapter wildturkey)

