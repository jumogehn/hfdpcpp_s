//===--- PlumTomatoSauce.cpp - ----------------------------------*- C++ -*-===//
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

#include "PlumTomatoSauce.hpp"
#include "Utilities.hpp"
#include <string>

using namespace HFDP::Factory::Abstract;

std::string PlumTomatoSauce::toString() const
{
  PrintMessage("PlumTomatoSauce::toString");
  return "Tomato sauce with plum tomatoes";
}
