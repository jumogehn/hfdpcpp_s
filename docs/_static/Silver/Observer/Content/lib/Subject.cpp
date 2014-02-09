//===--- Subject.hpp - ------------------------------------------*- C++ -*-===//
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


#include "Subject.hpp"
#include "Utilities.hpp"

using namespace HFDP::Observer;

Subject::~Subject()
{
  PrintMessage("Subject::~Subject");
}
