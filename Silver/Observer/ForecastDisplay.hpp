#ifndef	_HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class ForecastDisplay : private Observer, private DisplayElement {

      WeatherData* _weatherData;
      float _currentPressure;
      float _lastPressure;

      ForecastDisplay( const ForecastDisplay& ); // Disable copy constructor
      void operator=( const ForecastDisplay& ); // Disable assignment operator

    public:
      explicit ForecastDisplay( WeatherData* weatherData ) :
        _weatherData( weatherData ), _currentPressure( 29.92F ),
        _lastPressure( 0 )
      {
        assert( weatherData );
        weatherData->registerObserver( this );
      }
      ~ForecastDisplay()
      {
        _weatherData->removeObserver( this );
      }
      void update( float temp, float humidity, float pressure )
      {
        _lastPressure = _currentPressure;
        _currentPressure = pressure;
        display();
      }
      void display() const
      {
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
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
