#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class CeilingFan {

        mutable int _speed;
        std::string _location;

      public:
        static const int HIGH = 3;
        static const int MEDIUM = 2;
        static const int LOW = 1;
        static const int OFF = 0;

        explicit CeilingFan( std::string location ) :
          _speed( OFF ), _location( location )
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::CeilingFan"));
        }
        void high() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::high"));
          _speed = HIGH;
          std::cout << _location.c_str() << " ceiling fan is on high"
            << std::endl;
        }
        void medium() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::medium"));
          _speed = MEDIUM;
          std::cout << _location.c_str() << " ceiling fan is on medium"
            << std::endl;
        }
        void low() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::low"));
          _speed = LOW;
          std::cout << _location.c_str() << " ceiling fan is on low"
            << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::off"));
          _speed = OFF;
          std::cout << _location.c_str() << " ceiling fan is off"
            << std::endl;
        }
        int getSpeed() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::getSpeed"));
          return _speed;
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
