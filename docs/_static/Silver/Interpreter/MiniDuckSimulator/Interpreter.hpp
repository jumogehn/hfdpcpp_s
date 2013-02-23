#ifndef	_HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_INTERPRETER_HPP_
#define _HFDP_CPP_INTERPRETER_MINI_DUCK_SIMULATOR_INTERPRETER_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Interpreter {
    namespace MiniDuckSimulator {

      class Interpreter : public Visitor {

        const Duck* _duck;

      public:
        explicit Interpreter( const Duck* duck ) :
          _duck( duck )
        {}
        void interpret( DisplayCommand* command )
        {
          assert( command );
          _duck->display();
        }
        void interpret( FlyCommand* command )
        {
          assert( command );
          _duck->fly();
        }
        void interpret( QuackCommand* command )
        {
          assert( command );
          _duck->quack();
        }
        void interpret( SwimCommand* command )
        {
          assert( command );
          _duck->swim();
        }
        void interpret( LeftCommand* command )
        {
          assert( command );
          std::cout << "I'm turning left..." << std::endl;
        }
        void interpret( RightCommand* command )
        {
          assert( command );
          std::cout << "I'm turning right..." << std::endl;
        }
        void interpret( WhileCommand* command )
        {
          assert( command );
          while( true == command->evaluate() ) {
            Context context( command->expression() );
            interpret( context );
          }
        }
        void interpret( Context& context )
        {
          Expression* expression = context.next();
          for( ; 0 != expression; expression = context.next() ) {
            expression->accept( this );
            delete( expression );
          }
        };
      };

    } // namespace MiniDuckSimulator
  } // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif
