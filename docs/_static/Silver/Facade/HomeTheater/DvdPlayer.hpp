#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_DVD_PLAYER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Amplifier;

      class DvdPlayer {
        std::string _description;
        Amplifier* _amplifier;
        int _currentTrack;
        std::string _movie;

        DvdPlayer( const DvdPlayer& ); // Disable copy constructor
        void operator=( const DvdPlayer& ); // Disable assignment operator

      public:
        DvdPlayer( std::string description, Amplifier* amplifier ) :
          _description( description ), _amplifier( amplifier ),
          _currentTrack( 0 )
        {
          assert( amplifier );
          HUM_TRACE(ACE_TEXT("DvdPlayer::DvdPlayer"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::on"));
          std::cout << _description << " on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::off"));
          std::cout << _description << " off" << std::endl;
        }
        void eject()
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::eject"));
          _movie.empty();
          std::cout << _description << " eject" << std::endl;
        }
        void play( std::string movie )
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::play"));
          _movie = movie;
          std::cout << _description << " playing \"" << _movie << "\""
            << std::endl;
        }
        void play( int track )
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::play"));
          if( _movie.length() == 0 ) {
            std::cout << _description << " can't play track " << track
              << " no dvd inserted" << std::endl;
          } else {
            _currentTrack = track;
            std::cout << _description << " playing track " << track
              << " of \"" << _movie << "\"" << std::endl;
          }
        }
        void stop()
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::stop"));
          _currentTrack = 0;
          std::cout << _description << " stopped \"" << _movie << "\""
            << std::endl;
        }
        void pause()
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::pause"));
          std::cout << _description << " paused \"" << _movie << "\""
            << std::endl;
        }
        void setTwoChannelAudio()
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::setTwoChannelAudio"));
          std::cout << _description << " set two channel audio" << std::endl;
        }
        void setSurroundAudio()
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::setSurroundAudio"));
          std::cout << _description << " set surround audio" << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("DvdPlayer::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

