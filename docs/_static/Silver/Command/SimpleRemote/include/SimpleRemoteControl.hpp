//===--- SimpleRemoteControl.hpp - ------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_

#include "Command.hpp"

namespace HFDP {
  namespace Command {
    namespace SimpleRemote {

      class SimpleRemoteControl {

        const Command* _slot;

      public:
        SimpleRemoteControl();
        void setCommand( const Command* command );
        void buttonWasPressed() const;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HFDP

#endif
