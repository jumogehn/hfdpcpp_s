#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class GarageDoorDownCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorDownCommand( const GarageDoor* garageDoor ) :
          _garageDoor( garageDoor )
        {
          assert( garageDoor );
          HUM_TRACE(ACE_TEXT("GarageDoorDownCommand::GarageDoorDownCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("GarageDoorDownCommand::execute"));
          _garageDoor->down();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
