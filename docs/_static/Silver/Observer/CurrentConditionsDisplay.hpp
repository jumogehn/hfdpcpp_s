#ifndef	_HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class CurrentConditionsDisplay : private Observer, private DisplayElement {

      Subject* _weatherData;
      float _temperature;
      float _humidity;

      CurrentConditionsDisplay( const CurrentConditionsDisplay& );
      void operator=( const CurrentConditionsDisplay& );

    public:
      explicit CurrentConditionsDisplay( Subject* weatherData ) :
        _weatherData( weatherData ), _temperature( 0.0 ), _humidity( 0.0 )
      {
        assert( weatherData );
        _weatherData->registerObserver( this );
      }
      ~CurrentConditionsDisplay()
      {
        _weatherData->removeObserver( this );
      }
      void update( float temperature, float humidity, float pressure )
      {
        _temperature = temperature;
        _humidity = humidity;
        display();
      }
      void display() const
      {
        std::cout.setf( std::ios::showpoint );
        std::cout.precision(3);
        std::cout << "Current conditions: "	<< _temperature;
        std::cout << " F degrees and " << _humidity;
        std::cout << "% humidity" << std::endl;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
