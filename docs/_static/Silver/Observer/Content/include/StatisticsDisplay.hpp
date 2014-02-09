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


#ifndef	_HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_

#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

namespace HFDP {
  namespace Observer {

    class StatisticsDisplay : private Observer, private DisplayElement {

      WeatherData* _weatherData;
      float _maxTemp;
      float _minTemp;
      float _tempSum;
      int _numReadings;

      StatisticsDisplay( const StatisticsDisplay& ); // Disable copy constructor
      void operator=( const StatisticsDisplay& ); // Disable assignment operator

    public:
      explicit StatisticsDisplay( WeatherData* weatherData );
      ~StatisticsDisplay();
      void update( float temp, float humidity, float pressure );
      void display() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
