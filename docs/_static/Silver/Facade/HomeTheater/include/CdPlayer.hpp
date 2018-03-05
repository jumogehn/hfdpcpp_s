#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_CD_PLAYER_HPP_


#include <string>

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
        CdPlayer( std::string description, Amplifier* amplifier );
        void on() const;
        void off() const;
        void eject();
        void play( std::string title);
        void play( int track );
        void stop();
        void pause();
        std::string toString() const;
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif

