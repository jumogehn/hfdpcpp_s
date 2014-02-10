//===--- ModelDuck.cpp - ----------------------------------------*- C++ -*-===//
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

#include "ModelDuck.hpp"
#include "Utilities.hpp"
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "FakeQuack.hpp"
#include <iostream>

using namespace HFDP::Strategy;

ModelDuck::ModelDuck() : Duck( new FlyNoWay(), new FakeQuack() )
{
  PrintMessage("ModelDuck::ModelDuck");
}
void ModelDuck::display() const
{
  PrintMessage("ModelDuck::display");
  std::cout << "I'm a model duck" << std::endl;
}

