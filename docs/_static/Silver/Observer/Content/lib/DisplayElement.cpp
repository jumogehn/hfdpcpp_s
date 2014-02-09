//===--- DisplayElement.hpp - -----------------------------------*- C++ -*-===//
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

#include "DisplayElement.hpp"
#include "Utilities.hpp"

using namespace HFDP::Observer;

DisplayElement::~DisplayElement()
{
  PrintMessage("DisplayElement::~DisplayElement");
}
