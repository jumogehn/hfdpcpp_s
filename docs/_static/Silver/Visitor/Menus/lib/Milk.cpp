//===--- Milk.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Milk.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Milk::Milk( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Milk::Milk");
}
void Milk::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Milk::accept");
  return visitor->visit( this );
}
float Milk::getCalories() const
{
  PrintMessage("Milk::getCalories");
  return 146.0f;
}
float Milk::getCarbs() const
{
  PrintMessage("Milk::getCarbs");
  return 11.0f;
}
float Milk::getProtien() const
{
  PrintMessage("Milk::getProtien");
  return 8.0f;
}
float Milk::getFat() const
{
  PrintMessage("Milk::getFat");
  return 8.0f;
}
float Milk::getCholesterol() const
{
  PrintMessage("Milk::getCholesterol");
  return 0.0f;
}
float Milk::getSodium() const
{
  PrintMessage("Milk::getSodium");
  return 0.98f;
}
bool Milk::isVegetarian() const
{
  PrintMessage("Milk::isVegetarian");
  return false;
}
std::string Milk::toString() const
{
  PrintMessage("Milk::toString");
  std::stringstream result;
  result << "Milk(" << _amount << ")";
  return result.str();
}
