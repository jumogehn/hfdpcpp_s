//===--- CondimentDecorator.hpp - -------------------------------*- C++ -*-===//
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


#include "CondimentDecorator.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

CondimentDecorator::CondimentDecorator()
{
  PrintMessage("CondimentDecorator::CondimentDecorator");
}
CondimentDecorator::~CondimentDecorator()
{
  PrintMessage("CondimentDecorator::~CondimentDecorator");
}
