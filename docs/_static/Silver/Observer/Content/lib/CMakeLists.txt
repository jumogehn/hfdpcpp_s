
#http://www-flc.desy.de/ldcoptimization/documents/talks/CMake_Tutorial.pdf

# CmakeLists.txt in lib dir
INCLUDE_DIRECTORIES(${Content_SOURCE_DIR}/include)

# Adds a library called content (libcontent.a under Linux) from the source files under lib/
ADD_LIBRARY( content DisplayElement HeatIndexDisplay StatisticsDisplay Utilities
  CurrentConditionsDisplay ForecastDisplay Observer Subject WeatherData )

foreach(flag ${CXX11_FEATURE_LIST})
  set_property(TARGET content
	APPEND PROPERTY COMPILE_DEFINITIONS ${flag}
	)
endforeach()

