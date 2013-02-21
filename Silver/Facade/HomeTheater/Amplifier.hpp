#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_AMPLIFIER_HPP_

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
        {}
        void on() const
        {
          std::cout << _description << " on" << std::endl;
        }
        void off() const
        {
          std::cout << _description << " off" << std::endl;
        }
        void setStereoSound()
        {
          std::cout << _description << " stereo mode on" << std::endl;
        }
        void setSurroundSound()
        {
          std::cout << _description
            << " surround sound on (5 speakers, 1 subwoofer)" << std::endl;
        }
        void setVolume( int level )
        {
          assert( 0 < level );
          std::cout << _description
            << " setting volume to " << level << std::endl;
        }
        void setTuner( Tuner* tuner)
        {
          assert( tuner );
          std::cout << _description
            << " setting tuner to " << tuner->toString() << std::endl;
          _tuner = tuner;
        }
        void setDvd( DvdPlayer* dvd )
        {
          assert( dvd );
          std::cout << _description
            << " setting DVD player to " << dvd->toString()<< std::endl;
          _dvd = dvd;
        }
        void setCd( CdPlayer* cd )
        {
          assert( cd );
          std::cout << _description
            << " setting CD player to " << cd->toString() << std::endl;
          _cd = cd;
        }
        std::string toString() const
        {
          return _description.c_str();
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
