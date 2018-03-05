

#include <cassert>
#include <iostream>
#include <string>
#include "CdPlayer.hpp"

using namespace HeadFirstDesignPatterns::Facade::HomeTheater;

CdPlayer::CdPlayer( std::string description, Amplifier* amplifier ) :
  _description( description ), _amplifier( amplifier ),
  _currentTrack( 0 )
{
  assert( amplifier );
  std::cout << "CdPlayer::CdPlayer" << std::endl;
}
void CdPlayer::on() const
{
  std::cout << "CdPlayer::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}
void CdPlayer::off() const
{
  std::cout << "CdPlayer::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}
void CdPlayer::eject()
{
  std::cout << "CdPlayer::eject" << std::endl;
  _title.empty();
  std::cout << _description.c_str() << " eject" << std::endl;
}
void CdPlayer::play( std::string title)
{
  std::cout << "CdPlayer::play" << std::endl;
  _title = title;
  std::cout << _description.c_str() << " playing \"" << _title
    << "\"" << std::endl;
}
void CdPlayer::play( int track )
{
  std::cout << "CdPlayer::play" << std::endl;
  if( _title.length() == 0 ) {
    std::cout << _description.c_str() << " can't play track "
      << _currentTrack << ", no cd inserted" << std::endl;
  } else {
    _currentTrack = track;
    std::cout << _description.c_str() << " playing track "
      << _currentTrack << std::endl;
  }
}
void CdPlayer::stop()
{
  std::cout << "CdPlayer::stop" << std::endl;
  _currentTrack = 0;
  std::cout << _description.c_str() << " stopped" << std::endl;
}
void CdPlayer::pause()
{
  std::cout << "CdPlayer::pause" << std::endl;
  std::cout << _description.c_str() << " paused \"" << _title << "\""
    << std::endl;
}
std::string CdPlayer::toString() const
{
  std::cout << "CdPlayer::toString" << std::endl;
  return _description;
}


