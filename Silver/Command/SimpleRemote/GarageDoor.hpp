#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class GarageDoor {

      public:
        GarageDoor()
        {}
        void up() const
        {
          std::cout << "Garage Door is Open" << std::endl;
        }
        void down() const
        {
          std::cout << "Garage Door is Closed" << std::endl;
        }
        void stop() const
        {
          std::cout << "Garage Door is Stopped" << std::endl;
        }
        void lightOn() const
        {
          std::cout << "Garage light is on" << std::endl;
        }
        void lightOff() const
        {
          std::cout << "Garage light is off" << std::endl;
        }
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
