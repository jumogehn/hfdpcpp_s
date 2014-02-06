//===--- Command.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_COMMAND_HPP_

namespace HFDP {
  namespace Command {
    namespace SimpleRemote {

      class Command {

      public:
        virtual ~Command();
        virtual void execute() const = 0;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HFDP

#endif
