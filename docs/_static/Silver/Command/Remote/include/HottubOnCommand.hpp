//===--- HottubOnCommand.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_ON_COMMAND_HPP_

#include "Command.hpp"
#include "Hottub.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class HottubOnCommand : public Command {

        const Hottub* _hottub;

      public:
        explicit HottubOnCommand( const Hottub* hottub );
        void execute() const;
      };

    } // namespace Simpleemote
  } // namespace Command
} // namespace HFDP

#endif
