//===--- HottubOffCommand.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_HOTTUB_OFF_COMMAND_HPP_

#include "Command.hpp"
#include "Hottub.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class HottubOffCommand : public Command {

        const Hottub* _hottub;

      public:
        explicit HottubOffCommand( const Hottub* hottub );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
