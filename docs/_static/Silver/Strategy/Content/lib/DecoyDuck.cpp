//===--- DecoyDuck.cpp - ----------------------------------------*- C++ -*-===//
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

#include "DecoyDuck.hpp"
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

DecoyDuck::DecoyDuck()
: Duck( new FlyNoWay(), new MuteQuack() )
{
  PrintMessage("DecoyDuck::DecoyDuck");
}
void DecoyDuck::display() const
{
  PrintMessage("DecoyDuck::display");
  std::cout << "I'm a duck Decoy" << std::endl;
}
