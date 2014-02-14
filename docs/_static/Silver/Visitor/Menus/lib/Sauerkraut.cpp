//===--- Sauerkraut.cpp - ---------------------------------------*- C++ -*-===//
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

#include "Sauerkraut.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Sauerkraut::Sauerkraut( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Sauerkraut::Sauerkraut");
}
void Sauerkraut::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Sauerkraut::accept");
  return visitor->visit( this );
}
float Sauerkraut::getCalories() const
{
  PrintMessage("Sauerkraut::getCalories");
  return 31.0f;
}
float Sauerkraut::getCarbs() const
{
  PrintMessage("Sauerkraut::getCarbs");
  return 6.0f;
}
float Sauerkraut::getProtien() const
{
  PrintMessage("Sauerkraut::getProtien");
  return 1.0f;
}
float Sauerkraut::getFat() const
{
  PrintMessage("Sauerkraut::getFat");
  return 0.0f;
}
float Sauerkraut::getCholesterol() const
{
  PrintMessage("Sauerkraut::getCholesterol");
  return 0.0f;
}
float Sauerkraut::getSodium() const
{
  PrintMessage("Sauerkraut::getSodium");
  return 0.437f;
}
bool Sauerkraut::isVegetarian() const
{
  PrintMessage("Sauerkraut::isVegetarian");
  return true;
}
std::string Sauerkraut::toString() const
{
  PrintMessage("Sauerkraut::toString");
  std::stringstream result;
  result << "SauerKraut(" << _amount << ")";
  return result.str();
}
