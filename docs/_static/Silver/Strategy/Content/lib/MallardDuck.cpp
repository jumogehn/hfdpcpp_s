//===--- MallardDuck.cpp - --------------------------------------*- C++ -*-===//
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

#include "MallardDuck.hpp"
#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

MallardDuck::MallardDuck() : Duck( new FlyWithWings(), new Quack() )
{
  PrintMessage("MallardDuck::MallardDuck");
}
void MallardDuck::display() const
{
  PrintMessage("MallardDuck::display");
  std::cout << "I'm a real Mallard duck" << std::endl;
}

