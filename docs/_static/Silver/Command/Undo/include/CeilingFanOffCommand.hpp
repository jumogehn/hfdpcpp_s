//===--- CeilingFanOffCommand.hpp - -----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_CEILING_FAN_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_CEILING_FAN_OFF_COMMAND_HPP_

#include "Command.hpp"
#include "CeilingFan.hpp"

namespace HFDP {
  namespace Command {
    namespace Undo {

      class CeilingFanOffCommand :public Command {

        const CeilingFan* _ceilingFan;
        mutable int _prevSpeed;

      public:
        explicit CeilingFanOffCommand( const CeilingFan* ceilingFan );
        void execute() const;
        void undo() const;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
