#ifndef	_HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
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
      explicit StatisticsDisplay( WeatherData* weatherData ) :
        _weatherData( weatherData ), _maxTemp( 0.0 ), _minTemp( 200.0F ),
        _tempSum( 0.0 ), _numReadings( 0 )
      {
        assert( weatherData );
        HUM_TRACE(ACE_TEXT("StatisticsDisplay::StatisticsDisplay"));
        _weatherData->registerObserver( this );
      }
      ~StatisticsDisplay()
      {
        HUM_TRACE(ACE_TEXT("StatisticsDisplay::~StatisticsDisplay"));
        _weatherData->removeObserver( this );
      }
      void update( float temp, float humidity, float pressure )
      {
        HUM_TRACE(ACE_TEXT("StatisticsDisplay::update"));
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
      void display() const
      {
        HUM_TRACE(ACE_TEXT("StatisticsDisplay::display"));
        std::cout.setf( std::ios::showpoint );
        std::cout.precision(3);
        std::cout << "Avg/Max/Min temperature = " << ( _tempSum / _numReadings );
        std::cout << "/" << _maxTemp << "/" << _minTemp << std::endl;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
