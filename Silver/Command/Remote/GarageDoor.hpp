#ifndef	_HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class GarageDoor {

        std::string _location;

      public:
        explicit GarageDoor( const std::string location ) :
          _location( location )
        {}
        void up() const
        {
          std::cout << _location.c_str() << " Door is Up" << std::endl;
        }
        void down() const
        {
          std::cout << _location.c_str() << " Door is Down" << std::endl;
        }
        void stop() const
        {
          std::cout << _location.c_str() << " Door is Stopped" << std::endl;
        }
        void lightOn() const
        {
          std::cout << _location.c_str() << " light is on" << std::endl;
        }
        void lightOff() const
        {
          std::cout << _location.c_str() << " light is off" << std::endl;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
