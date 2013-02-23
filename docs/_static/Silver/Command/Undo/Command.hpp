#ifndef	_HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class Command {

      public:
        virtual ~Command()
        {
          HUM_TRACE(ACE_TEXT("Command::~Command"));
        }

        virtual void execute() const = 0;
        virtual void undo() const = 0;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
