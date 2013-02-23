#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Amplifier;

      class CdPlayer {

        std::string _description;
        Amplifier* _amplifier;
        std::string _title;
        int _currentTrack;

        CdPlayer( const CdPlayer& ); // Disable copy constructor
        void operator=( const CdPlayer& ); // Disable assignment operator

      public:
        CdPlayer( std::string description, Amplifier* amplifier ) :
          _description( description ), _amplifier( amplifier ),
          _currentTrack( 0 )
        {
          assert( amplifier );
          HUM_TRACE(ACE_TEXT("CdPlayer::CdPlayer"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::on"));
          std::cout << _description.c_str() << " on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::off"));
          std::cout << _description.c_str() << " off" << std::endl;
        }
        void eject()
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::eject"));
          _title.empty();
          std::cout << _description.c_str() << " eject" << std::endl;
        }
        void play( std::string title)
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::play"));
          _title = title;
          std::cout << _description.c_str() << " playing \"" << _title
            << "\"" << std::endl;
        }
        void play( int track )
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::play"));
          if( _title.length() == 0 ) {
            std::cout << _description.c_str() << " can't play track "
              << _currentTrack << ", no cd inserted" << std::endl;
          } else {
            _currentTrack = track;
            std::cout << _description.c_str() << " playing track "
              << _currentTrack << std::endl;
          }
        }
        void stop()
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::stop"));
          _currentTrack = 0;
          std::cout << _description.c_str() << " stopped" << std::endl;
        }
        void pause()
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::pause"));
          std::cout << _description.c_str() << " paused \"" << _title << "\""
            << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("CdPlayer::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

