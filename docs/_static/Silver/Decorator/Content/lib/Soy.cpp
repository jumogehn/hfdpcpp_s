//===--- Soy.hpp - ----------------------------------------------*- C++ -*-===//
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

#include "Soy.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <string>

using namespace HFDP::Decorator;

Soy::Soy( const Beverage* beverage ) :
  _beverage( beverage )
{
  assert( beverage );
  PrintMessage("Soy::Soy");
}
Soy::~Soy()
{
  PrintMessage("Soy::~Soy");
  delete _beverage;
}
std::string Soy::getDescription() const
{
  PrintMessage("Soy::getDescription");
  return _beverage->getDescription() + ", Soy";
}
double Soy::cost() const
{
  PrintMessage("Soy::cost");
  return 0.15 + _beverage->cost();
}

