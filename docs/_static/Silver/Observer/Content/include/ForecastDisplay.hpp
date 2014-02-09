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


#ifndef	_HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

namespace HFDP {
  namespace Observer {

    class ForecastDisplay : private Observer, private DisplayElement {

      WeatherData* _weatherData;
      float _currentPressure;
      float _lastPressure;

      ForecastDisplay( const ForecastDisplay& ); // Disable copy constructor
      void operator=( const ForecastDisplay& ); // Disable assignment operator

    public:
      explicit ForecastDisplay( WeatherData* weatherData );
      ~ForecastDisplay();
      void update( float temp, float humidity, float pressure );
      void display() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
