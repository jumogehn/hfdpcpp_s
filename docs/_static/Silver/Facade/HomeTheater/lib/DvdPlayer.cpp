

#include "DvdPlayer.hpp"

#include <cassert>
#include <iostream>
#include <string>

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

DvdPlayer::DvdPlayer( std::string description, Amplifier* amplifier ) :
  _description( description ), _amplifier( amplifier ),
  _currentTrack( 0 )
{
  assert( amplifier );
  std::cout << "DvdPlayer::DvdPlayer" << std::endl;
}
void DvdPlayer::on() const
{
  std::cout << "DvdPlayer::on" << std::endl;
  std::cout << _description << " on" << std::endl;
}
void DvdPlayer::off() const
{
  std::cout << "DvdPlayer::off" << std::endl;
  std::cout << _description << " off" << std::endl;
}
void DvdPlayer::eject()
{
  std::cout << "DvdPlayer::eject" << std::endl;
  _movie.empty();
  std::cout << _description << " eject" << std::endl;
}
void DvdPlayer::play( std::string movie )
{
  std::cout << "DvdPlayer::play" << std::endl;
  _movie = movie;
  std::cout << _description << " playing \"" << _movie << "\""
    << std::endl;
}
void DvdPlayer::play( int track )
{
  std::cout << "DvdPlayer::play" << std::endl;
  if( _movie.length() == 0 ) {
    std::cout << _description << " can't play track " << track
      << " no dvd inserted" << std::endl;
  } else {
    _currentTrack = track;
    std::cout << _description << " playing track " << track
      << " of \"" << _movie << "\"" << std::endl;
  }
}
void DvdPlayer::stop()
{
  std::cout << "DvdPlayer::stop" << std::endl;
  _currentTrack = 0;
  std::cout << _description << " stopped \"" << _movie << "\""
    << std::endl;
}
void DvdPlayer::pause()
{
  std::cout << "DvdPlayer::pause" << std::endl;
  std::cout << _description << " paused \"" << _movie << "\""
    << std::endl;
}
void DvdPlayer::setTwoChannelAudio()
{
  std::cout << "DvdPlayer::setTwoChannelAudio" << std::endl;
  std::cout << _description << " set two channel audio" << std::endl;
}
void DvdPlayer::setSurroundAudio()
{
  std::cout << "DvdPlayer::setSurroundAudio" << std::endl;
  std::cout << _description << " set surround audio" << std::endl;
}
std::string DvdPlayer::toString() const
{
  std::cout << "DvdPlayer::toString" << std::endl;
  return _description;
}



