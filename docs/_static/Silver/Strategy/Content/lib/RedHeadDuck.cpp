//===--- RedHeadDuck.cpp - --------------------------------------*- C++ -*-===//
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

#include "RedHeadDuck.hpp"
#include "Duck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

RedHead::RedHead() : Duck( new FlyWithWings(), new Quack() )
{
  PrintMessage("RedHead::RedHead");
}
void RedHead::display() const
{
  PrintMessage("RedHead::display");
  std::cout << "I'm a real Red Headed duck" << std::endl;
}

