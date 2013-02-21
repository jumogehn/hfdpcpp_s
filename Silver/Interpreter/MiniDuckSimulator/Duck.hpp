#ifndef	_HFDP_CPP_INTERPRETER_DUCK_HPP_
#define _HFDP_CPP_INTERPRETER_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Interpreter {
    namespace MiniDuckSimulator {

      class Duck {

        std::auto_ptr< FlyBehavior > _flyBehavior;
        std::auto_ptr< QuackBehavior > _quackBehavior;

        Duck( const Duck& ); // Disable copy constructor
        void operator=( const Duck& ); // Disable assignment operator

      protected:
        Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior ) :
          _flyBehavior( flyBehavior ), _quackBehavior( quackBehavior )
        {
          assert( flyBehavior ); assert( quackBehavior );
        }
      public:
        virtual ~Duck()
        {}
        void setFlyBehavior( FlyBehavior* fb ) { assert( fb );
          _flyBehavior = std::auto_ptr< FlyBehavior >( fb );
        }
        void setQuackBehavior( QuackBehavior* qb ) { assert( qb );
          _quackBehavior = std::auto_ptr< QuackBehavior >( qb );
        }
        void fly() const {
          _flyBehavior->fly();
        }
        void quack() const {
          _quackBehavior->quack();
        }
        void swim() const {
          std::cout << "All ducks float, even decoys!" << std::endl;
        }
        virtual void display() const = 0;
      };

    } // namespace MiniDuckSimulator
  } // namespace Interpreter
} // namespace HeadFirstDesignPatterns

#endif
