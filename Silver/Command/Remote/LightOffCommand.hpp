#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class LightOffCommand : public Command {

        const Light* _light;

      public:
        explicit LightOffCommand( const Light* light  ) :
          _light( light )
        {
          assert( light );
          HUM_TRACE(ACE_TEXT("LightOffCommand::LightOffCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("LightOffCommand::execute"));
          _light->off();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
