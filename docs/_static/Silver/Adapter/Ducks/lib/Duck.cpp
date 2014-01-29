//===--- Duck.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Duck.hpp"
#include <iostream>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

Duck::~Duck()
{
  std::cout << "Duck::~Duck()" << std::endl;
}

