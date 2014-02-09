//===--- StatisticsDisplay.hpp - --------------------------------*- C++ -*-===//
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


#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cassert>

using namespace HFDP::Observer;

StatisticsDisplay::StatisticsDisplay( WeatherData* weatherData ) :
  _weatherData( weatherData ), _maxTemp( 0.0 ), _minTemp( 200.0F ),
  _tempSum( 0.0 ), _numReadings( 0 )
{
  assert( weatherData );
  PrintMessage("StatisticsDisplay::StatisticsDisplay");
  _weatherData->registerObserver( this );
}
StatisticsDisplay::~StatisticsDisplay()
{
  PrintMessage("StatisticsDisplay::~StatisticsDisplay");
  _weatherData->removeObserver( this );
}
void StatisticsDisplay::update( float temp, float humidity, float pressure )
{
  PrintMessage("StatisticsDisplay::update");
  _tempSum += temp;
  _numReadings++;

  if( temp > _maxTemp ) {
    _maxTemp = temp;
  }

  if( temp < _minTemp ) {
    _minTemp = temp;
  }

  display();
}
void StatisticsDisplay::display() const
{
  PrintMessage("StatisticsDisplay::display");
  std::cout.setf( std::ios::showpoint );
  std::cout.precision(3);
  std::cout << "Avg/Max/Min temperature = " << ( _tempSum / _numReadings );
  std::cout << "/" << _maxTemp << "/" << _minTemp << std::endl;
}
