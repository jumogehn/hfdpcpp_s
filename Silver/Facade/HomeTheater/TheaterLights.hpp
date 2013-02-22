#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class TheaterLights {

        std::string _description;

        TheaterLights( const TheaterLights& ); // Disable copy constructor
        void operator=( const TheaterLights& ); // Disable assignment operator

      public:
        TheaterLights( std::string description ) :
          _description( description )
        {
          HUM_TRACE(ACE_TEXT("TheaterLights::TheaterLights"));
        }
        void on()
        {
          HUM_TRACE(ACE_TEXT("TheaterLights::on"));
          std::cout << _description.c_str() << " on" << std::endl;
        }

        void off()
        {
          HUM_TRACE(ACE_TEXT("TheaterLights::off"));
          std::cout << _description.c_str() << " off" << std::endl;
        }

        void dim( int level )
        {
          HUM_TRACE(ACE_TEXT("TheaterLights::dim"));
          std::cout << _description.c_str() << " dimming to " << level
            << "%" << std::endl;
        }

        std::string toString()
        {
          HUM_TRACE(ACE_TEXT("TheaterLights::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
