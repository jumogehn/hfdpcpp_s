//===--- HouseBlend.hpp - ---------------------------------------*- C++ -*-===//
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

#include "HouseBlend.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

HouseBlend::HouseBlend()
{
  PrintMessage("HouseBlend::HouseBlend");
  _description = "House Blend Coffee";
}

double HouseBlend::cost() const
{
  PrintMessage("HouseBlend::cost");
  return 0.89;
}
