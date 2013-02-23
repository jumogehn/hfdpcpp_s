#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class Amplifier;

      class Tuner {

        std::string _description;
        Amplifier* _amplifier;
        double _frequency;

        Tuner( const Tuner& ); // Disable copy constructor
        void operator=( const Tuner& ); // Disable assignment operator

      public:
        Tuner( std::string description, Amplifier* amplifier ) :
          _description( description ), _amplifier( amplifier ), _frequency(0.0)
        {
          assert( amplifier );
          HUM_TRACE(ACE_TEXT("Tuner::Tuner"));
        }
        void on()
        {
          HUM_TRACE(ACE_TEXT("Tuner::on"));
          std::cout << _description.c_str() << " on" << std::endl;
        }
        void off()
        {
          HUM_TRACE(ACE_TEXT("Tuner::off"));
          std::cout << _description.c_str() << " off" << std::endl;
        }
        void setFrequency( double frequency )
        {
          HUM_TRACE(ACE_TEXT("Tuner::setFrequency"));
          std::cout << _description.c_str() << " setting frequency to "
            << _frequency << std::endl;
          _frequency = frequency;
        }
        void setAm()
        {
          HUM_TRACE(ACE_TEXT("Tuner::setAm"));
          std::cout << _description.c_str() << " setting AM mode" << std::endl;
        }
        void setFm()
        {
          HUM_TRACE(ACE_TEXT("Tuner::setFm"));
          std::cout << _description.c_str() << " setting FM mode" << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Tuner::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
