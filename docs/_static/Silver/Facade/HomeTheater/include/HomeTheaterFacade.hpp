#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_


#include <string>
#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "DvdPlayer.hpp"
#include "CdPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"


namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class HomeTheaterFacade {

        Amplifier* _amp;
        Tuner* _tuner;
        DvdPlayer* _dvd;
        CdPlayer* _cd;
        Projector* _projector;
        TheaterLights* _lights;
        Screen* _screen;
        PopcornPopper* _popper;

        HomeTheaterFacade( const HomeTheaterFacade& );
        void operator=( const HomeTheaterFacade& );

      public:
        HomeTheaterFacade( Amplifier* amp, Tuner* tuner, DvdPlayer* dvd,
                           CdPlayer* cd, Projector* projector, Screen* screen,
                           TheaterLights* lights, PopcornPopper* popper );
        void watchMovie( std::string movie );
        void endMovie();
        void listenToCd( std::string cdTitle );
        void endCd();
        void listenToRadio( double frequency );
        void endRadio();
      };
    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

