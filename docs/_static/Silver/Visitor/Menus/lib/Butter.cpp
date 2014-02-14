//===--- Butter.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Butter.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Butter::Butter( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Butter::Butter");
}
void Butter::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Butter::accept");
  return visitor->visit( this );
}
float Butter::getCalories() const
{
  PrintMessage("Butter::getCalories");
  return 141.0f;
}
float Butter::getCarbs() const
{
  PrintMessage("Butter::getCarbs");
  return 0.0f;
}
float Butter::getProtien() const
{
  PrintMessage("Butter::getProtien");
  return 1.0f;
}
float Butter::getFat() const
{
  PrintMessage("Butter::getFat");
  return 16.0f;
}
float Butter::getCholesterol() const
{
  PrintMessage("Butter::getCholesterol");
  return 0.30f;
}
float Butter::getSodium() const
{
  PrintMessage("Butter::getSodium");
  return 0.127f;
}
bool Butter::isVegetarian() const
{
  PrintMessage("Butter::isVegetarian");
  return false;
}
std::string Butter::toString() const
{
  PrintMessage("Butter::toString");
  std::stringstream result;
  result << "Butter(" << _amount << ")";
  return result.str();
}
