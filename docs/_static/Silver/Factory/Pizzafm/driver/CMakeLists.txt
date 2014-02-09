
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library pizzafm.
INCLUDE_DIRECTORIES(${Pizzafm_SOURCE_DIR}/include)

# Add binary called "testpizzafm" that is built from the source file "Pizzafm.cpp". 
# The extension is automatically found.
ADD_EXECUTABLE(testpizzafm Pizzafm)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testpizzafm
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library pizzafm.
TARGET_LINK_LIBRARIES(testpizzafm pizzafm)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testpizzafm duck duckadapter mallardduck turkey turkeyadapter wildturkey)

