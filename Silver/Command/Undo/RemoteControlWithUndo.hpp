#ifndef	_HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_CONTROL_WITH_UNDO_HPP_

#include "Undo.hpp"
#include <typeinfo>

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      //
      // This is the invoker
      //
      class RemoteControlWithUndo {

        static const int SLOTS = 7;

        Command* _onCommands[SLOTS];
        Command* _offCommands[SLOTS];
        Command* _noCommand;
        mutable Command* _undoCommand;

      public:
        RemoteControlWithUndo()
        {
          _noCommand = new NoCommand();
          for( int i = 0; i < SLOTS; i++ ) {
            _onCommands[i] = _noCommand;
            _offCommands[i] = _noCommand;
          }
          _undoCommand = _noCommand;
        }
        ~RemoteControlWithUndo()
        {
          delete _noCommand;
        }
        void setCommand( int slot, Command* onCommand, Command* offCommand )
        {
          assert( slot <= SLOTS ); assert( onCommand ); assert( offCommand );
          _onCommands[slot]  = onCommand;
          _offCommands[slot] = offCommand;
        }
        void onButtonWasPushed( int slot ) const
        {
          assert( slot <= SLOTS );
          _onCommands[slot]->execute();
          _undoCommand = _onCommands[slot];
        }
        void offButtonWasPushed( int slot ) const
        {
          assert( slot <= SLOTS );
          _offCommands[slot]->execute();
          _undoCommand = _offCommands[slot];
        }
        void undoButtonWasPushed() const
        {
          _undoCommand->undo();
        }
        std::string toString() const
        {
          std::stringstream value;
          value << std::endl << "------ Remote Control -------" << std::endl;
          for( int i = 0; i < SLOTS; i++ ) {
            value << "[slot " << i << "] ";
            value << typeid( *_onCommands[i] ).name();
            value << "    ";
            value << typeid( *_offCommands[i] ).name();
            value << std::endl;
          }
          value << "[undo] " << typeid( *_undoCommand ).name() << std::endl;

          return value.str();
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
