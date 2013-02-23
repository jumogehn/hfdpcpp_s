#ifndef	_HFDP_CPP_MEDIATOR_AUTO_HOUSE_WEATHER_STATION_HPP_
#define _HFDP_CPP_MEDIATOR_AUTO_HOUSE_WEATHER_STATION_HPP_

#include <process.h>

namespace HeadFirstDesignPatterns {
  namespace Mediator {
    namespace AutoHouse {

      class WeatherStation : public Appliance {
        int _random;

      public:
        WeatherStation( Mediator* mediator ) :
          Appliance( mediator )
        {
          assert( mediator );
        }
        void off()
        {
          _mediator->output( "Weather station is off" );
        }
        void on( unsigned long value = 0 )
        {
          srand( _getpid() );
          _mediator->output( "Weather station is on" );
        }
        void onEvent( unsigned long value ) const
        {
          _mediator->onEvent( this, value );
        }
        bool isRainning()
        {
          return ( rand() % 100 ) % 2 == 0;
        }
      };

    } // namespace AutoHouse
  } // namespace Mediator
} // namespace HeadFirstDesignPatterns

#endif
