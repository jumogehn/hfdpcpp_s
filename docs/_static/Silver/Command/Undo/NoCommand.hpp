#ifndef	_HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_NO_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class NoCommand : public Command {

      public:
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("NoCommand::execute"));
        }
        void undo() const
        {
          HUM_TRACE(ACE_TEXT("NoCommand::undo"));
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
