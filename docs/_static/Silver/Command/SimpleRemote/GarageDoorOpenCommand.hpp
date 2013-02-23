#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class GarageDoorOpenCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorOpenCommand( const GarageDoor* garageDoor) :
          _garageDoor( garageDoor )
        {
          assert( garageDoor );
          HUM_TRACE(ACE_TEXT("GarageDoorOpenCommand::GarageDoorOpenCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoorOpenCommand::execute"));
          _garageDoor->up();
        }
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
