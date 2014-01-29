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


#include "Ducks.hpp"
#include "Turkey.hpp"
#include <stdio.h>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

Turkey::~Turkey()
{
  fprintf(stdout, "Turkey::~Turkey\n");
}

