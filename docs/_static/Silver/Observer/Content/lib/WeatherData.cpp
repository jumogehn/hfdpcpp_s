//===--- WeatherData.hpp - --------------------------------------*- C++ -*-===//
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


#include "WeatherData.hpp"
#include "Observer.hpp"
#include "Utilities.hpp"
#include <list>
#include <cassert>

using namespace HFDP::Observer;

WeatherData::WeatherData() :
  _temperature( 0.0 ), _humidity( 0.0 ), _pressure( 0.0 )
{
  PrintMessage("WeatherData::WeatherData");
}
void WeatherData::registerObserver( Observer* o )
{
  assert( o );
  PrintMessage("WeatherData::registerObserver");
  _observers.push_back(o);
}
void WeatherData::removeObserver( Observer* o )
{
  assert( o );
  PrintMessage("WeatherData::removeObserver");
  _observers.remove(o);
}
void WeatherData::notifyObservers() const
{
  PrintMessage("WeatherData::notifyObservers");
  for( std::list< Observer* >::iterator iterator = _observers.begin();
       _observers.end() != iterator; ++iterator ) {
    Observer* observer = *iterator;
    observer->update( _temperature, _humidity, _pressure );
  }
}
void WeatherData::measurementsChanged()
{
  PrintMessage("WeatherData::measurementsChanged");
  notifyObservers();
}
void WeatherData::setMeasurements( float temperature, float humidity, float pressure )
{
  PrintMessage("WeatherData::setMeasurements");
  _temperature = temperature;
  _humidity = humidity;
  _pressure = pressure;
  measurementsChanged();
}

// other WeatherData methods here

float WeatherData::getTemperature() const
{
  PrintMessage("WeatherData::getTemperature");
  return _temperature;
}
float WeatherData::getHumidity() const
{
  PrintMessage("WeatherData::getHumidity");
  return _humidity;
}
float WeatherData::getPressure() const
{
  PrintMessage("WeatherData::getPressure");
  return _pressure;
}

