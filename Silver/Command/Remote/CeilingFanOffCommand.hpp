#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CEILING_FAN_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class CeilingFanOffCommand : public Command {

        const CeilingFan* _ceilingFan;

      public:
        explicit CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
          _ceilingFan( ceilingFan )
        {
          assert( ceilingFan );
          HUM_TRACE(ACE_TEXT("CeilingFanOffCommand::CeilingFanOffCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("CeilingFanOffCommand::execute"));
          _ceilingFan->off();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
