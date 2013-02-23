#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class HottubOnCommand : public Command {

        const Hottub* _hottub;

      public:
        explicit HottubOnCommand( const Hottub* hottub ) :
          _hottub( hottub )
        {
          HUM_TRACE(ACE_TEXT("HottubOnCommand::HottubOnCommand"));
          assert( hottub );
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("HottubOnCommand::execute"));
          _hottub->on();
          _hottub->heat();
          _hottub->bubblesOn();
        }
      };

    } // namespace Simpleemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
