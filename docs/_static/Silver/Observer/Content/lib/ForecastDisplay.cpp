//===--- ForecastDisplay.hpp - ----------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

#include "ForecastDisplay.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>

using namespace HFDP::Observer;

ForecastDisplay::ForecastDisplay( WeatherData* weatherData ) :
  _weatherData( weatherData ), _currentPressure( 29.92F ),
  _lastPressure( 0 )
{
  assert( weatherData );
  PrintMessage("ForecastDisplay::ForecastDisplay");
  weatherData->registerObserver( this );
}
ForecastDisplay::~ForecastDisplay()
{
  PrintMessage("ForecastDisplay::~ForecastDisplay");
  _weatherData->removeObserver( this );
}
void ForecastDisplay::update( float temp, float humidity, float pressure )
{
  PrintMessage("ForecastDisplay::update");
  _lastPressure = _currentPressure;
  _currentPressure = pressure;
  display();
}
void ForecastDisplay::display() const
{
  PrintMessage("ForecastDisplay::display");
  std::cout.setf( std::ios::showpoint );
  std::cout.precision(3);
  std::cout << "Forecast: ";
  if( _currentPressure > _lastPressure ) {
    std::cout << "Improving weather on the way!";
  } else if( _currentPressure == _lastPressure ) {
    std::cout << "More of the same";
  } else if( _currentPressure < _lastPressure ) {
    std::cout << "Watch out for cooler, rainy weather";
  }
  std::cout << std::endl;
}
