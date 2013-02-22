#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_UP_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_UP_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class GarageDoorUpCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorUpCommand( const GarageDoor* garageDoor ) :
          _garageDoor( garageDoor )
        {
          assert( garageDoor );
          HUM_TRACE(ACE_TEXT("GarageDoorUpCommand::GarageDoorUpCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoorUpCommand::execute"));
          _garageDoor->up();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
