//===--- Tomato.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Tomato.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Tomato::Tomato( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Tomato::Tomato");
}
void Tomato::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Tomato::accept");
  return visitor->visit( this );
}
float Tomato::getCalories() const
{
  PrintMessage("Tomato::getCalories");
  return 25.0f;
}
float Tomato::getCarbs() const
{
  PrintMessage("Tomato::getCarbs");
  return 0.0f;
}
float Tomato::getProtien() const
{
  PrintMessage("Tomato::getProtien");
  return 2.0f;
}
float Tomato::getFat() const
{
  PrintMessage("Tomato::getFat");
  return 0.0f;
}
float Tomato::getCholesterol() const
{
  PrintMessage("Tomato::getCholesterol");
  return 0.0f;
}
float Tomato::getSodium() const
{
  PrintMessage("Tomato::getSodium");
  return 0.66f;
}
bool Tomato::isVegetarian() const
{
  PrintMessage("Tomato::isVegetarian");
  return true;
}
std::string Tomato::toString() const
{
  PrintMessage("Tomato::toString");
  std::stringstream result;
  result << "Tomato(" << _amount << ")";
  return result.str();
}
