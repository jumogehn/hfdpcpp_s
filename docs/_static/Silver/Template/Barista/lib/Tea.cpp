//===--- Tea.cpp - ----------------------------------------------*- C++ -*-===//
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

#include "Tea.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Template::Barista;

void Tea::brew() const
{
  PrintMessage("Tea::brew");
  std::cout << "Steeping the tea" << std::endl;
}
void Tea::addCondiments() const
{
  PrintMessage("Tea::addCondiments");
  std::cout << "Adding Lemon" << std::endl;
}
