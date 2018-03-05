
#include "Amplifier.hpp"
#include <cassert>
#include <iostream>
#include <string>
#include "Tuner.hpp"
#include "DvdPlayer.hpp"
#include "CdPlayer.hpp"

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

Amplifier::Amplifier( std::string description ) :
  _description( description ), _tuner( 0 ), _dvd( 0 ), _cd( 0 )
{
  std::cout << "Amplifier::Amplifier" << std::endl;
}
void Amplifier::on() const
{
  std::cout << "Amplifier::on" << std::endl;
  std::cout << _description << " on" << std::endl;
}
void Amplifier::off() const
{
  std::cout << "Amplifier::off" << std::endl;
  std::cout << _description << " off" << std::endl;
}
void Amplifier::setStereoSound()
{
  std::cout << "Amplifier::setStereoSound" << std::endl;
  std::cout << _description << " stereo mode on" << std::endl;
}
void Amplifier::setSurroundSound()
{
  std::cout << "Amplifier::setSurroundSound" << std::endl;
  std::cout << _description
    << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
}
void Amplifier::setVolume( int level )
{
  assert( 0 < level );
  std::cout << "Amplifier::setVolume" << std::endl;
  std::cout << _description
    << " setting volume to " << level << std::endl;
}
void Amplifier::setTuner( Tuner* tuner)
{
  assert( tuner );
  std::cout << "Amplifier::setTuner" << std::endl;
  std::cout << _description
    << " setting tuner to " << tuner->toString() << std::endl;
  _tuner = tuner;
}
void Amplifier::setDvd( DvdPlayer* dvd )
{
  assert( dvd );
  std::cout << "Amplifier::setDvd" << std::endl;
  std::cout << _description
    << " setting DVD player to " << dvd->toString()<< std::endl;
  _dvd = dvd;
}
void Amplifier::setCd( CdPlayer* cd )
{
  assert( cd );
  std::cout << "Amplifier::setCd" << std::endl;
  std::cout << _description
    << " setting CD player to " << cd->toString() << std::endl;
  _cd = cd;
}
std::string Amplifier::toString() const
{
  std::cout << "Amplifier::toString" << std::endl;
  return _description.c_str();
}


