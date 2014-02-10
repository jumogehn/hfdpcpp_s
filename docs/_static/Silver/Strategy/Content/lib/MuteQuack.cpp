//===--- MuteQuack.cpp - ----------------------------------------*- C++ -*-===//
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

#include "MuteQuack.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Strategy;

void MuteQuack::quack () const
{
  PrintMessage("MuteQuack::quack");
  std::cout << "<< Silence >>" << std::endl;
}

