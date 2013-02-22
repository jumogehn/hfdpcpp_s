#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_FACADE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

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
                           TheaterLights* lights, PopcornPopper* popper ) :
          _amp( amp ), _tuner( tuner ), _dvd( dvd ), _cd( cd ),
          _projector( projector ), _lights( lights ), _screen( screen ),
          _popper( popper )
        {
          assert(amp);
          assert(tuner);
          assert(dvd);
          assert(cd);
          assert(projector);
          assert(screen);
          assert(lights);
          assert(popper);
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::~HomeTheaterFacade"));
        }
        void watchMovie( std::string movie )
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::watchMovie"));
          std::cout << "Get ready to watch a movie..." << std::endl;
          _popper->on();
          _popper->pop();
          _lights->dim( 10 );
          _screen->down();
          _projector->on();
          _projector->wideScreenMode();
          _amp->on();
          _amp->setDvd( _dvd );
          _amp->setSurroundSound();
          _amp->setVolume( 5 );
          _dvd->on();
          _dvd->play( movie );
        }
        void endMovie()
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::endMovie"));
          std::cout << "Shutting movie theater down..." << std::endl;
          _popper->off();
          _lights->on();
          _screen->up();
          _projector->off();
          _amp->off();
          _dvd->stop();
          _dvd->eject();
          _dvd->off();
        }
        void listenToCd( std::string cdTitle )
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::listenToCd"));
          std::cout << "Get ready for an audiopile experence..." << std::endl;
          _lights->on();
          _amp->on();
          _amp->setVolume( 5 );
          _amp->setCd( _cd );
          _amp->setStereoSound();
          _cd->on();
          _cd->play( cdTitle );
        }
        void endCd()
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::endCd"));
          std::cout << "Shutting down CD..." << std::endl;
          _amp->off();
          _amp->setCd( _cd );
          _cd->eject();
          _cd->off();
        }
        void listenToRadio( double frequency )
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::listenToRadio"));
          std::cout << "Tuning in the airwaves..." << std::endl;
          _tuner->on();
          _tuner->setFrequency( frequency );
          _amp->on();
          _amp->setVolume( 5 );
          _amp->setTuner( _tuner );
        }
        void endRadio()
        {
          HUM_TRACE(ACE_TEXT("HomeTheaterFacade::endRadio"));
          std::cout << "Shutting down the tuner..." << std::endl;
          _tuner->off();
          _amp->off();
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

