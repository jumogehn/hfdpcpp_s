//===--- Bagel.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Bagel.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Bagel::Bagel( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Bagel::Bagel");
}
void Bagel::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Bagel::accept");
  return visitor->visit( this );
}
float Bagel::getCalories() const
{
  PrintMessage("Bagel::getCalories");
  return 216.0f;
};
float Bagel::getCarbs() const
{
  PrintMessage("Bagel::getCarbs");
  return 0.0f;
};
float Bagel::getProtien() const
{
  PrintMessage("Bagel::getProtien");
  return 0.0f;
}
float Bagel::getFat() const
{
  PrintMessage("Bagel::getFat");
  return 1.4f;
}
float Bagel::getCholesterol() const
{
  PrintMessage("Bagel::getCholesterol");
  return 0.0f;
}
float Bagel::getSodium() const
{
  PrintMessage("Bagel::getSodium");
  return 0.0f;
}
bool Bagel::isVegetarian() const
{
  PrintMessage("Bagel::isVegetarian");
  return false;
}
std::string Bagel::toString() const
{
  PrintMessage("Bagel::toString");
  std::stringstream result;
  result << "Bagel(" << _amount << ")";
  return result.str();
}
