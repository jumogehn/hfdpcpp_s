//===--- MozzarellaCheese.cpp - ---------------------------------*- C++ -*-===//
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

#include "MozzarellaCheese.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string MozzarellaCheese::toString() const
{
  PrintMessage("MozzarellaCheese::toString");
  return "Shredded Mozzarella";
}
