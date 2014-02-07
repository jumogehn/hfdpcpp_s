//===--- Command.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_


namespace HFDP {
  namespace Command {
    namespace Undo {

      class Command {

      public:
        virtual ~Command();
        virtual void execute() const = 0;
        virtual void undo() const = 0;
      };

    } // namespace Undo
  } // namespace Command
} // namespace HFDP

#endif
