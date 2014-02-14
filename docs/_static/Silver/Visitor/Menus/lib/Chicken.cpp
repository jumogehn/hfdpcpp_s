//===--- Chicken.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Chicken.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Chicken::Chicken( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Chicken::Chicken");
}
void Chicken::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Chicken::accept");
  return visitor->visit( this );
}
float Chicken::getCalories() const
{
  PrintMessage("Chicken::getCalories");
  return 188.0f;
}
float Chicken::getCarbs() const
{
  PrintMessage("Chicken::getCarbs");
  return 0.0f;
}
float Chicken::getProtien() const
{
  PrintMessage("Chicken::getProtien");
  return 8.0f;
}
float Chicken::getFat() const
{
  PrintMessage("Chicken::getFat");
  return 17.0f;
}
float Chicken::getCholesterol() const
{
  PrintMessage("Chicken::getCholesterol");
  return 0.47f;
}
float Chicken::getSodium() const
{
  PrintMessage("Chicken::getSodium");
  return 0.38f;
}
bool Chicken::isVegetarian() const
{
  PrintMessage("Chicken::isVegetarian");
  return false;
}
std::string Chicken::toString() const
{
  PrintMessage("Chicken::toString");
  std::stringstream result;
  result << "Chicken(" << _amount << ")";
  return result.str();
}
