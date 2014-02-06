//===--- GarageDoorOpenCommand.hpp - ----------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_

#include "Command.hpp"
#include "GarageDoor.hpp"

namespace HFDP {
  namespace Command {
    namespace SimpleRemote {

      class GarageDoorOpenCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorOpenCommand( const GarageDoor* garageDoor);
        void execute() const;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HFDP

#endif
