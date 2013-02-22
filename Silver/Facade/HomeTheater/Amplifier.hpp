#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Amplifier {

        std::string _description;
        Tuner* _tuner;
        DvdPlayer* _dvd;
        CdPlayer* _cd;

        Amplifier( const Amplifier& ); // Disable copy constructor
        void operator=( const Amplifier& ); // Disable assignment operator

      public:
        explicit Amplifier( std::string description ) :
          _description( description ), _tuner( 0 ), _dvd( 0 ), _cd( 0 )
        {
          HUM_TRACE(ACE_TEXT("Amplifier::Amplifier"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Amplifier::on"));
          std::cout << _description << " on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Amplifier::off"));
          std::cout << _description << " off" << std::endl;
        }
        void setStereoSound()
        {
          HUM_TRACE(ACE_TEXT("Amplifier::setStereoSound"));
          std::cout << _description << " stereo mode on" << std::endl;
        }
        void setSurroundSound()
        {
          HUM_TRACE(ACE_TEXT("Amplifier::setSurroundSound"));
          std::cout << _description
            << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
        }
        void setVolume( int level )
        {
          assert( 0 < level );
          HUM_TRACE(ACE_TEXT("Amplifier::setVolume"));
          std::cout << _description
            << " setting volume to " << level << std::endl;
        }
        void setTuner( Tuner* tuner)
        {
          assert( tuner );
          HUM_TRACE(ACE_TEXT("Amplifier::setTuner"));
          std::cout << _description
            << " setting tuner to " << tuner->toString() << std::endl;
          _tuner = tuner;
        }
        void setDvd( DvdPlayer* dvd )
        {
          assert( dvd );
          HUM_TRACE(ACE_TEXT("Amplifier::setDvd"));
          std::cout << _description
            << " setting DVD player to " << dvd->toString()<< std::endl;
          _dvd = dvd;
        }
        void setCd( CdPlayer* cd )
        {
          assert( cd );
          HUM_TRACE(ACE_TEXT("Amplifier::setCd"));
          std::cout << _description
            << " setting CD player to " << cd->toString() << std::endl;
          _cd = cd;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Amplifier::toString"));
          return _description.c_str();
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
