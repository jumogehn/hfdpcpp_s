#ifndef	_HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_
#define _HFDP_CPP_FACADE_HOME_THEATER_POPCORN_POPPER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "HomeTheater.hpp"

namespace HeadFirstDesignPatterns {
  namespace Facade {
    namespace HomeTheater {

      class PopcornPopper {

        std::string _description;

        PopcornPopper( const PopcornPopper& ); // Disable copy constructor
        void operator=( const PopcornPopper& ); // Disable assignment operator

      public:
        PopcornPopper( std::string description) :
          _description( description )
        {
          HUM_TRACE(ACE_TEXT("PopcornPopper::PopcornPopper"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("PopcornPopper::on"));
          std::cout << _description.c_str() << " on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("PopcornPopper::off"));
          std::cout << _description.c_str() << " off" << std::endl;
        }
        void pop() const
        {
          HUM_TRACE(ACE_TEXT("PopcornPopper::pop"));
          std::cout << _description.c_str() << " popping popcorn!"
            << std::endl;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("PopcornPopper::toString"));
          return _description;
        }
      };

    } // namespace HomeTheater
  } // namespace Facade
} // namespace HeadFirstDesignPatterns

#endif
