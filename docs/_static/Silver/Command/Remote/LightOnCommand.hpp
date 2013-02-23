#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_ON_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class LightOnCommand : public Command {

        const Light* _light;

      public:
        explicit LightOnCommand( const Light* light ) :
          _light( light )
        {
          assert( light );
          HUM_TRACE(ACE_TEXT("LightOnCommand::LightOnCommand"));
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("LightOnCommand::execute"));
          _light->on();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
