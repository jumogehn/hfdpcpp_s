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


#ifndef	_HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_
#define _HFDP_CPP_OBSERVER_WEATHER_DATA_HPP_

#include "Subject.hpp"
#include "Observer.hpp"
#include <list>

namespace HFDP {
  namespace Observer {

    class WeatherData : public Subject {

      mutable std::list< Observer* > _observers;
      float _temperature;
      float _humidity;
      float _pressure;

      WeatherData( const WeatherData& ); // Disable copy constructor
      void operator=( const WeatherData& ); // Disable assignment operator

    public:
      WeatherData();
      void registerObserver( Observer* o );
      void removeObserver( Observer* o );
      void notifyObservers() const;
      void measurementsChanged();
      void setMeasurements( float temperature, float humidity, float pressure );

      // other WeatherData methods here

      float getTemperature() const;
      float getHumidity() const;
      float getPressure() const;

    };

  } // namespace Observer
} // namespace HFDP

#endif
