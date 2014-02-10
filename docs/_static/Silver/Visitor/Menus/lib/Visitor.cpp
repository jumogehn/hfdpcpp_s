//===--- Visitor.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Visitor.hpp"
#include "Utilities.hpp"

using namespace HFDP::Visitor::Menus;

Visitor::Visitor()
{
  PrintMessage("Visitor::Visitor");
}

Visitor::~Visitor()
{
  PrintMessage("Visitor::~Visitor");
}
