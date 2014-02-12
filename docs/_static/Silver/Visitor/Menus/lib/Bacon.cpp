//===--- Bacon.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Bacon.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Bacon::Bacon( float amount /*= 1.0f*/ )
: Ingredient( amount )
{
  PrintMessage("Bacon::Bacon");
}
void Bacon::accept( Visitor* visitor)
{
  assert( visitor );
  PrintMessage("Bacon::accept");
  return visitor->visit( this );
}
float Bacon::getCalories() const
{
  PrintMessage("Bacon::getCalories");
  return 254.0f;
}
float Bacon::getCarbs() const
{
  PrintMessage("Bacon::getCarbs");
  return 0.0f;
}
float Bacon::getProtien() const
{
  PrintMessage("Bacon::getProtien");
  return 0.0f;
}
float Bacon::getFat() const
{
  PrintMessage("Bacon::getFat");
  return 0.28f;
}
float Bacon::getCholesterol() const
{
  PrintMessage("Bacon::getCholesterol");
  return 0.27f;
}
float Bacon::getSodium() const
{
  PrintMessage("Bacon::getSodium");
  return 0.08f;
}
bool Bacon::isVegetarian() const
{
  PrintMessage("Bacon::isVegetarian");
  return false;
}
std::string Bacon::toString() const
{
  PrintMessage("Bacon::toString");
  std::stringstream result;
  result << "Bacon(" << _amount << ")";
  return result.str();
}
