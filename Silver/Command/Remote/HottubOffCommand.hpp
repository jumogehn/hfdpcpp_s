#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class HottubOffCommand : public Command {

        const Hottub* _hottub;

      public:
        explicit HottubOffCommand( const Hottub* hottub ) :
          _hottub( hottub )
        {
          HUM_TRACE(ACE_TEXT("HottubOffCommand::HottubOffCommand"));
          assert( hottub );
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("HottubOffCommand::execute"));
          _hottub->cool();
          _hottub->off();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
