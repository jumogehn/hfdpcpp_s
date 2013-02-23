#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_CONTROL_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class SimpleRemoteControl {

        const Command* _slot;

      public:
        SimpleRemoteControl() :
          _slot( 0 )
        {
          HUM_TRACE(ACE_TEXT("SimpleRemoteControl::SimpleRemoteControl"));
        }
        void setCommand( const Command* command )
        {
          assert( command );
          HUM_TRACE(ACE_TEXT("SimpleRemoteControl::setCommand"));
          _slot = command;
        }
        void buttonWasPressed() const
        {
          assert( _slot );
          HUM_TRACE(ACE_TEXT("SimpleRemoteControl::buttonWasPressed"));
          _slot->execute();
        }
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
