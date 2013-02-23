#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class Command {

      public:
        virtual ~Command()
        {
          HUM_TRACE(ACE_TEXT("Command::~Command"));
        }
        virtual void execute() const = 0;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
