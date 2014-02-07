//===--- LightOffCommand.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_OFF_COMMAND_HPP_

#include "Command.hpp"
#include "Light.hpp"

namespace HFDP {
  namespace Command {
    namespace Undo {

      class LightOffCommand : public Command {

        const Light* _light;

      public:
        explicit LightOffCommand( const Light* light );
        void execute() const;
        void undo() const;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
