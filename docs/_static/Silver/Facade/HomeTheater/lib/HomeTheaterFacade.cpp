
#include "HomeTheaterFacade.hpp"

#include <cassert>
#include <iostream>
#include <string>
#include "Amplifier.hpp"
#include "Tuner.hpp"
#include "DvdPlayer.hpp"
#include "CdPlayer.hpp"
#include "Projector.hpp"
#include "TheaterLights.hpp"
#include "Screen.hpp"
#include "PopcornPopper.hpp"


using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

HomeTheaterFacade::HomeTheaterFacade( Amplifier* amp, Tuner* tuner, DvdPlayer* dvd,
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
  std::cout << "HomeTheaterFacade::~HomeTheaterFacade" << std::endl;
}
void HomeTheaterFacade::watchMovie( std::string movie )
{
  std::cout << "HomeTheaterFacade::watchMovie" << std::endl;
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
void HomeTheaterFacade::endMovie()
{
  std::cout << "HomeTheaterFacade::endMovie" << std::endl;
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
void HomeTheaterFacade::listenToCd( std::string cdTitle )
{
  std::cout << "HomeTheaterFacade::listenToCd" << std::endl;
  std::cout << "Get ready for an audiopile experence..." << std::endl;
  _lights->on();
  _amp->on();
  _amp->setVolume( 5 );
  _amp->setCd( _cd );
  _amp->setStereoSound();
  _cd->on();
  _cd->play( cdTitle );
}
void HomeTheaterFacade::endCd()
{
  std::cout << "HomeTheaterFacade::endCd" << std::endl;
  std::cout << "Shutting down CD..." << std::endl;
  _amp->off();
  _amp->setCd( _cd );
  _cd->eject();
  _cd->off();
}
void HomeTheaterFacade::listenToRadio( double frequency )
{
  std::cout << "HomeTheaterFacade::listenToRadio" << std::endl;
  std::cout << "Tuning in the airwaves..." << std::endl;
  _tuner->on();
  _tuner->setFrequency( frequency );
  _amp->on();
  _amp->setVolume( 5 );
  _amp->setTuner( _tuner );
}
void HomeTheaterFacade::endRadio()
{
  std::cout << "HomeTheaterFacade::endRadio" << std::endl;
  std::cout << "Shutting down the tuner..." << std::endl;
  _tuner->off();
  _amp->off();
}



