#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"
#include <typeinfo>

namespace HeadFirstDesignPatterns {
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
        RemoteControl()
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::RemoteControl"));
          _noCommand = new NoCommand();
          for( int i = 0; i < SLOTS; i++ ) {
            _onCommands[i]  = _noCommand;
            _offCommands[i] = _noCommand;
          }
        }
        ~RemoteControl()
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::~RemoteControl"));
          delete _noCommand;
        }
        void setCommand( int slot, Command* onCommand, Command* offCommand )
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::setCommand"));
          assert( slot <= SLOTS ); assert( onCommand ); assert ( offCommand );
          _onCommands[slot] = onCommand;
          _offCommands[slot] = offCommand;
        }
        void onButtonWasPushed( int slot ) const
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::onButtonWasPushed"));
          assert( slot <= SLOTS );
          _onCommands[slot]->execute();
        }
        void offButtonWasPushed( int slot ) const
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::offButtonWasPushed"));
          assert( slot <= SLOTS );
          _offCommands[slot]->execute();
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("RemoteControl::toString"));
          std::stringstream value;
          value << "\n------ Remote Control -------\n" << std::endl;
          for( int i = 0; i < SLOTS; i++ ) {
            value << "[slot " << i << "] ";
            value << typeid( *_onCommands[i] ).name();
            value << "    ";
            value << typeid( *_offCommands[i] ).name();
            value << std::endl;
          }
          return value.str();
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
