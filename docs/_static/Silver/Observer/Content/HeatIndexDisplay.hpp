#ifndef	_HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
  namespace Observer {

    class HeatIndexDisplay : private Observer, private DisplayElement {

      Subject* _weatherData;
      float _heatIndex;

      HeatIndexDisplay( const HeatIndexDisplay& ); // Disable copy constructor
      void operator=( const HeatIndexDisplay& ); // Disable assignment operator

      float computeHeatIndex( float t, float rh ) const
      {
        HUM_TRACE(ACE_TEXT("HeatIndexDisplay::computeHeatIndex"));
        float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh)
                               - (0.100254 * t * rh) + (0.00941695 * (t * t) )
                               + (0.00728898 * (rh * rh) )
                               + (0.000345372 * (t * t * rh) )
                               - (0.000814971 * (t * rh * rh) )
                               + (0.0000102102 * (t * t * rh * rh) )
                               - (0.000038646 * (t * t * t) )
                               + (0.0000291583 * (rh * rh * rh) )
                               + (0.00000142721 * (t * t * t * rh) )
                               + (0.000000197483 * (t * rh * rh * rh) )
                               - (0.0000000218429 * (t * t * t * rh * rh) )
                               + 0.000000000843296 * (t * t * rh * rh * rh) )
                              - (0.0000000000481975 * (t * t * t * rh * rh * rh)
                                ) );
        return index;
      }

    public:
      explicit HeatIndexDisplay( Subject* weatherData ) :
        _weatherData( weatherData ), _heatIndex( 0.0 )
      {
        assert( weatherData );
        HUM_TRACE(ACE_TEXT("HeatIndexDisplay::HeatIndexDisplay"));
        _weatherData->registerObserver( this );
      }
      ~HeatIndexDisplay()
      {
        HUM_TRACE(ACE_TEXT("HeatIndexDisplay::~HeatIndexDisplay"));
        _weatherData->removeObserver( this );
      }
      void update( float t, float rh, float pressure )
      {
        HUM_TRACE(ACE_TEXT("HeatIndexDisplay::update"));
        _heatIndex = computeHeatIndex( t, rh );
        display();
      }

      void display() const
      {
        HUM_TRACE(ACE_TEXT("HeatIndexDisplay::display"));
        std::cout.setf( std::ios::showpoint);
        std::cout.precision(7);
        std::cout << "Heat index is " << _heatIndex << std::endl;
      }
    };

  } // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif
