#ifndef	_HFDP_CPP_STRATEGY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DUCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Strategy {

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
        HUM_TRACE(ACE_TEXT("Duck::Duck"));
      }

    public:
      virtual ~Duck()
      {
        HUM_TRACE(ACE_TEXT("Duck::~Duck"));
      }
      void setFlyBehavior( FlyBehavior* fb )
      {
        assert( fb );
        HUM_TRACE(ACE_TEXT("Duck::setFlyBehavior"));
        _flyBehavior = std::auto_ptr< FlyBehavior >( fb );
      }
      void setQuackBehavior( QuackBehavior* qb )
      {
        assert( qb );
        HUM_TRACE(ACE_TEXT("Duck::setQuackBehavior"));
        _quackBehavior = std::auto_ptr< QuackBehavior >( qb );
      }
      void performFly() const
      {
        HUM_TRACE(ACE_TEXT("Duck::performFly"));
        _flyBehavior->fly();
      }
      void performQuack() const
      {
        HUM_TRACE(ACE_TEXT("Duck::performQuack"));
        _quackBehavior->quack();
      }
      void swim() const
      {
        HUM_TRACE(ACE_TEXT("Duck::swim"));
        std::cout << "All ducks float, even decoys!" << std::endl;
      }
      virtual void display() const = 0;
    };

  } // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif
