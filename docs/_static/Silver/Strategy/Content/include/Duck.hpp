//===--- Duck.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DUCK_HPP_

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include <memory>

namespace HFDP {
  namespace Strategy {

    class Duck {

      std::unique_ptr< FlyBehavior > _flyBehavior;
      std::unique_ptr< QuackBehavior > _quackBehavior;

      Duck( const Duck& ); // Disable copy constructor
      void operator=( const Duck& ); // Disable assignment operator

    protected:
      Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior );

    public:
      virtual ~Duck();
      void setFlyBehavior( FlyBehavior* fb );
      void setQuackBehavior( QuackBehavior* qb );
      void performFly() const;
      void performQuack() const;
      void swim() const;
      virtual void display() const = 0;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
