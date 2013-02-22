#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class GarageDoor {

      public:
        GarageDoor()
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::GarageDoor"));
        }
        void up() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::up"));
          std::cout << "Garage Door is Open" << std::endl;
        }
        void down() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::down"));
          std::cout << "Garage Door is Closed" << std::endl;
        }
        void stop() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::stop"));
          std::cout << "Garage Door is Stopped" << std::endl;
        }
        void lightOn() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::lightOn"));
          std::cout << "Garage light is on" << std::endl;
        }
        void lightOff() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::lightOff"));
          std::cout << "Garage light is off" << std::endl;
        }
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
