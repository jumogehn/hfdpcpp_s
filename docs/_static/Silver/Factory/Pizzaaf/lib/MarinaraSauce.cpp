//===--- MarinaraSauce.cpp - ------------------------------------*- C++ -*-===//
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

#include "MarinaraSauce.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string MarinaraSauce::toString() const
{
  PrintMessage("MarinaraSauce::toString");
  return "Marinara Sauce";
}
