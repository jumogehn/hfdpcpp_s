//===--- DimmerLightOnCommand.hpp - -----------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_DIMMER_LIGHT_ON_COMMAND_HPP_

#include "Command.hpp"
#include "Light.hpp"

namespace HFDP {
  namespace Command {
    namespace Undo {

      class DimmerLightOnCommand : public Command {

        const Light* _light;
        mutable int _prevLevel;

      public:
        explicit DimmerLightOnCommand( const Light* light );
        void execute() const;
        void undo() const;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
