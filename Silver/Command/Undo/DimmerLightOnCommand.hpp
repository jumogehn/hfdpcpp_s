#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class DimmerLightOnCommand : public Command {

        const Light* _light;
        mutable int _prevLevel;

      public:
        explicit DimmerLightOnCommand( const Light* light ) :
          _light( light )
        {
          assert( light );
          HUM_TRACE(ACE_TEXT("DimmerLightOnCommand::DimmerLightOnCommand"));
          _prevLevel = _light->getLevel();
        }
        void execute() const
        {
          HUM_TRACE(ACE_TEXT("DimmerLightOnCommand::execute"));
          _prevLevel = _light->getLevel();
          _light->dim( 75 );
        }
        void undo() const
        {
          HUM_TRACE(ACE_TEXT("DimmerLightOnCommand::undo"));
          _light->dim( _prevLevel );
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
