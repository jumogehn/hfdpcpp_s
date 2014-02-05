//===--- NoCommand.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_NO_COMMAND_HPP_

#include "Command.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class NoCommand : public Command{

      public:
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
