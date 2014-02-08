//===--- Mocha.hpp - --------------------------------------------*- C++ -*-===//
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

#include "Mocha.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Decorator;

Mocha::Mocha( Beverage* beverage ) :
  _beverage( beverage )
{
  assert( beverage );
  PrintMessage("Mocha::Mocha");
}
Mocha::~Mocha()
{
  PrintMessage("Mocha::~Mocha");
  delete _beverage;
}
std::string Mocha::getDescription() const
{
  PrintMessage("Mocha::getDescription");
  return _beverage->getDescription() + ", Mocha";
}
double Mocha::cost() const
{
  PrintMessage("Mocha::cost");
  return 0.20 + _beverage->cost();
}

