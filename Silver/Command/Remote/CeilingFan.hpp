#ifndef	_HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CEILING_FAN_HPP_

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
        {}
        void high() const
        {
          _level = HIGH;
          std::cout << _location.c_str()
            << " ceiling fan is on high" << std::endl;
        }
        void medium() const
        {
          _level = MEDIUM;
          std::cout << _location.c_str()
            << " ceiling fan is on medium" << std::endl;
        }
        void low() const
        {
          _level = LOW;
          std::cout << _location.c_str()
            << " ceiling fan is on low" << std::endl;
        }
        void off() const
        {
          _level = 0;
          std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
        }
        int getSpeed() const
        {
          return _level;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
