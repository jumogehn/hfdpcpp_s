//===--- Coffee.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Coffee.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Template::Barista;

void Coffee::brew() const
{
  PrintMessage("Coffee::brew");
  std::cout << "Dripping Coffee through filter" << std::endl;
}
void Coffee::addCondiments() const
{
  PrintMessage("Coffee::addCondiments");
  std::cout << "Adding Sugar and Milk" << std::endl;
}
