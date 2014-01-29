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
#include "Ducks.hpp"
#include <stdio.h>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

void WildTurkey::fly() const
{
  fprintf(stdout, "WildTurkey::fly\n");
  std::cout << "I'm flying a short distance" << std::endl;
}

void WildTurkey::gobble() const
{
  fprintf(stdout, "WildTurkey::gobble\n");
  std::cout << "Gobble gobble" << std::endl;
}

