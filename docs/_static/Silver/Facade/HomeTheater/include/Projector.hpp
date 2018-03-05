#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_


#include <string>
#include "DvdPlayer.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Projector {

        std::string _description;
        DvdPlayer*  _dvdPlayer;

        Projector( const Projector& ); // Disable copy constructor
        void operator=( const Projector& ); // Disable assignment operator

      public:
        Projector( std::string description, DvdPlayer* dvdPlayer );
        void on();
        void off();
        void wideScreenMode();
        void tvMode();
        std::string toString();
      };
    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

