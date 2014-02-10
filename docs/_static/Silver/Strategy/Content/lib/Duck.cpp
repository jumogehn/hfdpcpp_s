//===--- Duck.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <memory>
#include <cassert>

using namespace HFDP::Strategy;

Duck::Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior ) :
  _flyBehavior( flyBehavior ), _quackBehavior( quackBehavior )
{
  assert( flyBehavior ); assert( quackBehavior );
  PrintMessage("Duck::Duck");
}

Duck::~Duck()
{
  PrintMessage("Duck::~Duck");
}
void Duck::setFlyBehavior( FlyBehavior* fb )
{
  assert( fb );
  PrintMessage("Duck::setFlyBehavior");
  _flyBehavior = std::unique_ptr< FlyBehavior >( fb );
}
void Duck::setQuackBehavior( QuackBehavior* qb )
{
  assert( qb );
  PrintMessage("Duck::setQuackBehavior");
  _quackBehavior = std::unique_ptr< QuackBehavior >( qb );
}
void Duck::performFly() const
{
  PrintMessage("Duck::performFly");
  _flyBehavior->fly();
}
void Duck::performQuack() const
{
  PrintMessage("Duck::performQuack");
  _quackBehavior->quack();
}
void Duck::swim() const
{
  PrintMessage("Duck::swim");
  std::cout << "All ducks float, even decoys!" << std::endl;
}

