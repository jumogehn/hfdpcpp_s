#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_

#include <string>

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Tuner;
      class DvdPlayer;
      class CdPlayer;

      class Amplifier {

        std::string _description;
        Tuner* _tuner;
        DvdPlayer* _dvd;
        CdPlayer* _cd;

        Amplifier( const Amplifier& ); // Disable copy constructor
        void operator=( const Amplifier& ); // Disable assignment operator

      public:
        explicit Amplifier( std::string description );
        void on() const;
        void off() const;
        void setStereoSound();
        void setSurroundSound();
        void setVolume( int level );
        void setTuner( Tuner* tuner);
        void setDvd( DvdPlayer* dvd );
        void setCd( CdPlayer* cd );
        std::string toString() const;
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
