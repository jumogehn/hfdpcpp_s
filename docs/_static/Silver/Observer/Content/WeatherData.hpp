#ifndef	_HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_
#define _HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "WeatherStation.hpp"
#include <list>

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class WeatherData : public Subject {

      mutable std::list< Observer* > _observers;
      float _temperature;
      float _humidity;
      float _pressure;

      WeatherData( const WeatherData& ); // Disable copy constructor
      void operator=( const WeatherData& ); // Disable assignment operator

    public:
      WeatherData() :
        _temperature( 0.0 ), _humidity( 0.0 ), _pressure( 0.0 )
      {
        HUM_TRACE(ACE_TEXT("WeatherData::WeatherData"));
      }
      void registerObserver( Observer* o )
      {
        assert( o );
        HUM_TRACE(ACE_TEXT("WeatherData::registerObserver"));
        _observers.push_back(o);
      }
      void removeObserver( Observer* o )
      {
        assert( o );
        HUM_TRACE(ACE_TEXT("WeatherData::removeObserver"));
        _observers.remove(o);
      }
      void notifyObservers() const
      {
        HUM_TRACE(ACE_TEXT("WeatherData::notifyObservers"));
        for( std::list< Observer* >::iterator iterator = _observers.begin();
             _observers.end() != iterator; ++iterator ) {
          Observer* observer = *iterator;
          observer->update( _temperature, _humidity, _pressure );
        }
      }
      void measurementsChanged()
      {
        HUM_TRACE(ACE_TEXT("WeatherData::measurementsChanged"));
        notifyObservers();
      }
      void setMeasurements( float temperature, float humidity, float pressure )
      {
        HUM_TRACE(ACE_TEXT("WeatherData::setMeasurements"));
        _temperature = temperature;
        _humidity = humidity;
        _pressure = pressure;
        measurementsChanged();
      }

      // other WeatherData methods here

      float getTemperature() const
      {
        HUM_TRACE(ACE_TEXT("WeatherData::getTemperature"));
        return _temperature;
      }
      float getHumidity() const
      {
        HUM_TRACE(ACE_TEXT("WeatherData::getHumidity"));
        return _humidity;
      }
      float getPressure() const
      {
        HUM_TRACE(ACE_TEXT("WeatherData::getPressure"));
        return _pressure;
      }

    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
