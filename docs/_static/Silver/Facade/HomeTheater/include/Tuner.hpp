#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_TUNER_HPP_


#include <string>

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
        Tuner( std::string description, Amplifier* amplifier );
        void on();
        void off();
        void setFrequency( double frequency );
        void setAm();
        void setFm();
        std::string toString() const;
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
