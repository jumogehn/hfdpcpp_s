//===--- RemoteControl.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_

#include "Command.hpp"
#include <string>

namespace HFDP {
  namespace Command {
    namespace Remote {

      //
      // This is the invoker
      //
      class RemoteControl {

        static const int SLOTS = 7;

        Command* _onCommands[SLOTS];
        Command* _offCommands[SLOTS];
        Command* _noCommand;

        RemoteControl( const RemoteControl& ); // Disable copy constructor
        void operator=( const RemoteControl& ); // Disable assignment operator

      public:
        RemoteControl();
        ~RemoteControl();
        void setCommand( int slot, Command* onCommand, Command* offCommand );
        void onButtonWasPushed( int slot ) const;
        void offButtonWasPushed( int slot ) const;
        std::string toString() const;
      };

    } // namespace Remote
  } // namespace Command
} // namespace HFDP

#endif
