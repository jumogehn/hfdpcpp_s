#ifndef	_HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class CeilingFan {

        mutable int _level;
        std::string _location;

      public:
        static const int HIGH = 2;
        static const int MEDIUM = 1;
        static const int LOW = 0;

        explicit CeilingFan( const std::string location ) :
          _level( LOW ), _location( location )
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::CeilingFan"));
        }
        void high() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::high"));
          _level = HIGH;
          std::cout << _location.c_str()
            << " ceiling fan is on high" << std::endl;
        }
        void medium() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::medium"));
          _level = MEDIUM;
          std::cout << _location.c_str()
            << " ceiling fan is on medium" << std::endl;
        }
        void low() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::low"));
          _level = LOW;
          std::cout << _location.c_str()
            << " ceiling fan is on low" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::off"));
          _level = 0;
          std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
        }
        int getSpeed() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFan::getSpeed"));
          return _level;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
