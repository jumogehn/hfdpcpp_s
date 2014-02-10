//===--- Quack.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Quack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void Quack::quack () const
{
  PrintMessage("Quack::quack");
  std::cout << "Quack" << std::endl;
}

