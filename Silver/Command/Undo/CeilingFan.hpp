#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_HPP_

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
        {}
        void high() const
        {
          _speed = HIGH;
          std::cout << _location.c_str() << " ceiling fan is on high"
            << std::endl;
        }
        void medium() const
        {
          _speed = MEDIUM;
          std::cout << _location.c_str() << " ceiling fan is on medium"
            << std::endl;
        }
        void low() const
        {
          _speed = LOW;
          std::cout << _location.c_str() << " ceiling fan is on low"
            << std::endl;
        }
        void off() const
        {
          _speed = OFF;
          std::cout << _location.c_str() << " ceiling fan is off"
            << std::endl;
        }
        int getSpeed() const
        {
          return _speed;
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
