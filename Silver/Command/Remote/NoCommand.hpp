#ifndef	_HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class NoCommand : public Command{

      public:
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("NoCommand::execute"));
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
