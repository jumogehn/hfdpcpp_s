//===--- RubberDuck.cpp - ---------------------------------------*- C++ -*-===//
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

#include "RubberDuck.hpp"
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

RubberDuck::RubberDuck() : Duck( new FlyNoWay(), new Squeak() )
{
  PrintMessage("RubberDuck::RubberDuck");
}
void RubberDuck::display() const
{
  PrintMessage("RubberDuck::display");
  std::cout << "I'm a rubber duck" << std::endl;
}

