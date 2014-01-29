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
#include "Utilities.hpp"

using namespace HFDP::Adapter::Ducks;

void MallardDuck::fly() const
{
  PrintMessage("MallardDuck::fly");
  PrintMessage("I'm flying");
}

void MallardDuck::quack() const
{
  PrintMessage("MallardDuck::quack");
  PrintMessage("Quack");
}

