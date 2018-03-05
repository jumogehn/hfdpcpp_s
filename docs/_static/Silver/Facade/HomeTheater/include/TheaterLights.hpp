#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_THEATER_LIGHTS_HPP_


#include <string>

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class TheaterLights {

        std::string _description;

        TheaterLights( const TheaterLights& ); // Disable copy constructor
        void operator=( const TheaterLights& ); // Disable assignment operator

      public:
        TheaterLights( std::string description );
        void on();
        void off();
        void dim( int level );
        std::string toString();
      };
    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
