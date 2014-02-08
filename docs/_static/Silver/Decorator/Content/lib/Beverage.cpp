//===--- Beverage.hpp - -----------------------------------------*- C++ -*-===//
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

#include "Beverage.hpp"
#include "Utilities.hpp"

using namespace HFDP::Decorator;

Beverage::Beverage() :
  _description( "Unknown Beverage" )
{
  PrintMessage("Beverage::Beverage");
}
Beverage::~Beverage()
{
  PrintMessage("Beverage::~Beverage");
}
std::string Beverage::getDescription() const
{
  PrintMessage("Beverage::getDescription");
  return _description;
}
