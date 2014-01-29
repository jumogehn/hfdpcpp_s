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
#include "Ducks.hpp"
#include <stdio.h>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

void MallardDuck::fly() const
{
  fprintf(stdout, "MallardDuck::fly\n");
  std::cout << "I'm flying" << std::endl;
}

void MallardDuck::quack() const
{

  fprintf(stdout, "MallardDuck::quack\n");
  std::cout << "Quack" << std::endl;
}

