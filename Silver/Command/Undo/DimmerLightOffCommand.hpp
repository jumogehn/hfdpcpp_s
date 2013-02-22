#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_OFF_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class DimmerLightOffCommand : public Command {

        const Light* _light;
        mutable int _prevLevel;

      public:
        explicit DimmerLightOffCommand( const Light* light ) :
          _light( light )
        {
          assert( light );
          HUM_TRACE(ACE_TEXT("DimmerLightOffCommand::DimmerLightOffCommand"));
          _prevLevel = _light->getLevel();
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("DimmerLightOffCommand::execute"));
          _prevLevel = _light->getLevel();
          _light->off();
        }
        void undo() const
        {
          HUM_TRACE(ACE_TEXT("DimmerLightOffCommand::undo"));
          _light->dim( _prevLevel );
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
