//===--- Beef.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Beef.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Beef::Beef( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Beef::Beef");
}
void Beef::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Beef::accept");
  return visitor->visit( this );
}
float Beef::getCalories() const
{
  PrintMessage("Beef::getCalories");
  return 1320.0f;
}
float Beef::getCarbs() const
{
  PrintMessage("Beef::getCarbs");
  return 0.0f;
}
float Beef::getProtien() const
{
  PrintMessage("Beef::getProtien");
  return 79.0f;
}
float Beef::getFat() const
{
  PrintMessage("Beef::getFat");
  return 109.0f;
}
float Beef::getCholesterol() const
{
  PrintMessage("Beef::getCholesterol");
  return 0.336f;
}
float Beef::getSodium() const
{
  PrintMessage("Beef::getSodium");
  return 0.286f;
}
bool Beef::isVegetarian() const
{
  PrintMessage("Beef::isVegetarian");
  return false;
}
std::string Beef::toString() const
{
  PrintMessage("Beef::toString");
  std::stringstream result;
  result << "Beef(" << _amount << ")";
  return result.str();
}
