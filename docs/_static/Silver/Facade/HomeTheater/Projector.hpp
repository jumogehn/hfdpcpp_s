#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Projector {

        std::string _description;
        DvdPlayer*  _dvdPlayer;

        Projector( const Projector& ); // Disable copy constructor
        void operator=( const Projector& ); // Disable assignment operator

      public:
        Projector( std::string description, DvdPlayer* dvdPlayer ) :
          _description( description ), _dvdPlayer( dvdPlayer )
        {
          assert( dvdPlayer );
          HUM_TRACE(ACE_TEXT("Projector::Projector"));
        }
        void on()
        {
          HUM_TRACE(ACE_TEXT("Projector::on"));
          std::cout << _description.c_str() << " on" << std::endl;
        }
        void off()
        {
          HUM_TRACE(ACE_TEXT("Projector::off"));
          std::cout << _description.c_str() << " off" << std::endl;
        }
        void wideScreenMode()
        {
          HUM_TRACE(ACE_TEXT("Projector::wideScreenMode"));
          std::cout << _description.c_str()
            << " in widescreen mode (16x9 aspect ratio)" << std::endl;
        }
        void tvMode()
        {
          HUM_TRACE(ACE_TEXT("Projector::tvMode"));
          std::cout << _description.c_str()
            << " in tv mode (4x3 aspect ratio)" << std::endl;
        }
        std::string toString()
        {
          HUM_TRACE(ACE_TEXT("Projector::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

