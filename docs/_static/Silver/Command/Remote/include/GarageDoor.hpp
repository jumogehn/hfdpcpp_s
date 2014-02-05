//===--- GarageDoor.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_GARAGE_DOOR_HPP_

#include <string>


namespace HFDP {
  namespace Command {
    namespace Remote {

      class GarageDoor {

        std::string _location;

      public:
        explicit GarageDoor( const std::string location );
        void up() const;
        void down() const;
        void stop() const;
        void lightOn() const;
        void lightOff() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
