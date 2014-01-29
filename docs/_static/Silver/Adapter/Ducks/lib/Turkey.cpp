//===--- Turkey.cpp - -------------------------------------------*- C++ -*-===//
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


#include "Turkey.hpp"
#include <iostream>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

Turkey::~Turkey()
{
  std::cout << "Turkey::~Turkey" << std::endl;
}

