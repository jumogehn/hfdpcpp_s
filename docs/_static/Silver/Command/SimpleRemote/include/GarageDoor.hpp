//===--- GarageDoor.hpp - ----------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_HPP_

namespace HFDP {
  namespace Command {
    namespace SimpleRemote {

      class GarageDoor {

      public:
        GarageDoor();
        void up() const;
        void down() const;
        void stop() const;
        void lightOn() const;
        void lightOff() const;
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HFDP

#endif
