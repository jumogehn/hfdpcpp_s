#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class LightOffCommand : public Command {

        const Light* _light;

      public:
        explicit LightOffCommand( const Light* light ) :
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
        void undo() const
        {
          HUM_TRACE(ACE_TEXT("LightOffCommand::undo"));
          _light->on();
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
