
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# Make sure the compiler can find include files from our library handlers.
INCLUDE_DIRECTORIES(${GumballEMailHandler_SOURCE_DIR}/include)

# Add binary called "testhandlers" that is built from the source file
# "GumballEMailHandler.cpp".
# The extension is automatically found.
ADD_EXECUTABLE(testhandlers GumballEMailHandler)

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET testhandlers
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

# Link the executable to the library handlers.
TARGET_LINK_LIBRARIES(testhandlers handlers)

# Link the executable to the libraries duck duckadapter mallardduck turkey turkeyadapter wildturkey.
#TARGET_LINK_LIBRARIES(testhandlers duck duckadapter mallardduck turkey turkeyadapter wildturkey)

