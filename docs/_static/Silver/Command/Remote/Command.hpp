#ifndef	_HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class Command {

        Command( const Command& ); // Disable copy constructor
        void operator=( const Command& ); // Disable assignment operator

      protected:
        Command()
        {
          HUM_TRACE(ACE_TEXT("Command::Command"));
        }
      public:
        virtual ~Command()
        {
          HUM_TRACE(ACE_TEXT("Command::~Command"));
        }
        virtual void execute() const = 0;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
