//===--- WildTurkey.cpp - ---------------------------------------*- C++ -*-===//
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

#include "WildTurkey.hpp"
#include <iostream>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

void WildTurkey::fly() const
{
  std::cout << "WildTurkey::fly" << std::endl;
  std::cout << "I'm flying a short distance" << std::endl;
}

void WildTurkey::gobble() const
{
  std::cout << "WildTurkey::gobble" << std::endl;
  std::cout << "Gobble gobble" << std::endl;
}

