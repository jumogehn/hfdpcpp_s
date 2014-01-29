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
#include <iostream>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

void MallardDuck::fly() const
{
  std::cout << "MallardDuck::fly" << std::endl;
  std::cout << "I'm flying" << std::endl;
}

void MallardDuck::quack() const
{
  std::cout << "MallardDuck::quack" << std::endl;
  std::cout << "Quack" << std::endl;
}

