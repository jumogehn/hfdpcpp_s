//===--- Cheese.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Cheese.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Cheese::Cheese( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Cheese::Cheese");
}
void Cheese::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Cheese::accept");
  return visitor->visit( this );
}
float Cheese::getCalories() const
{
  PrintMessage("Cheese::getCalories");
  return 751.0f;
}
float Cheese::getCarbs() const
{
  PrintMessage("Cheese::getCarbs");
  return 19.0f;
}
float Cheese::getProtien() const
{
  PrintMessage("Cheese::getProtien");
  return 0.0f;
}
float Cheese::getFat() const
{
  PrintMessage("Cheese::getFat");
  return 56.0f;
}
float Cheese::getCholesterol() const
{
  PrintMessage("Cheese::getCholesterol");
  return 0.145f;
}
float Cheese::getSodium() const
{
  PrintMessage("Cheese::getSodium");
  return 2.193f;
}
bool Cheese::isVegetarian() const
{
  PrintMessage("Cheese::isVegetarian");
  return false;
}
std::string Cheese::toString() const
{
  PrintMessage("Cheese::toString");
  std::stringstream result;
  result << "Cheese(" << _amount << ")";
  return result.str();
}
