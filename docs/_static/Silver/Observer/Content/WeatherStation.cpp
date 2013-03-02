
#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "WeatherStation.hpp"

using namespace HeadFirstDesignPatterns::Observer;

int main( int argc, char* argv[] ) {

  HUM_LOG_MANAGER->redirectToFile(ACE_TEXT("trace.log"));

  HUM_TRACE(ACE_TEXT("main"));

  WeatherData weatherData;

  CurrentConditionsDisplay currentDisplay( &weatherData );
  StatisticsDisplay statisticsDisplay( &weatherData );
  ForecastDisplay forecastDisplay( &weatherData );

#ifdef _HEAT_INDEX_DISPLAY_
  HeatIndexDisplay heatIndexDisplay( &weatherData );
#endif

  weatherData.setMeasurements( 80, 65, 30.4f );
  weatherData.setMeasurements( 82, 70, 29.2f );
  weatherData.setMeasurements( 78, 90, 29.2f );

  return 0;
}

