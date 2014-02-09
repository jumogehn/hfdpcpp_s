//===--- Observer.hpp - -----------------------------------------*- C++ -*-===//
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


#include "Observer.hpp"
#include "Utilities.hpp"

using namespace HFDP::Observer;

Observer::~Observer()
{
  PrintMessage("Observer::~Observer");
}
