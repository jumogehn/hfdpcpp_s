//===--- GarageDoorDownCommand.hpp - ----------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_DOWN_COMMAND_HPP_

#include "Command.hpp"
#include "GarageDoor.hpp"

namespace HFDP {
  namespace Command {
    namespace Remote {

      class GarageDoorDownCommand : public Command {

        const GarageDoor* _garageDoor;

      public:
        explicit GarageDoorDownCommand( const GarageDoor* garageDoor );
        void execute() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
