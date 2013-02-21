#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_PROJECTOR_HPP_

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
        }
        void on()
        {
          std::cout << _description.c_str() << " on" << std::endl;
        }
        void off()
        {
          std::cout << _description.c_str() << " off" << std::endl;
        }
        void wideScreenMode()
        {
          std::cout << _description.c_str()
            << " in widescreen mode (16x9 aspect ratio)" << std::endl;
        }
        void tvMode()
        {
          std::cout << _description.c_str()
            << " in tv mode (4x3 aspect ratio)" << std::endl;
        }
        std::string toString()
        {
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

