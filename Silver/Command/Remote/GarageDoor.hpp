#ifndef	_HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class GarageDoor {

        std::string _location;

      public:
        explicit GarageDoor( const std::string location ) :
          _location( location )
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::GarageDoor"));
        }
        void up() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::up"));
          std::cout << _location.c_str() << " Door is Up" << std::endl;
        }
        void down() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::down"));
          std::cout << _location.c_str() << " Door is Down" << std::endl;
        }
        void stop() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::stop"));
          std::cout << _location.c_str() << " Door is Stopped" << std::endl;
        }
        void lightOn() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::lightOn"));
          std::cout << _location.c_str() << " light is on" << std::endl;
        }
        void lightOff() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoor::lightOff"));
          std::cout << _location.c_str() << " light is off" << std::endl;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
