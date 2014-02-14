//===--- Bread.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Bread.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Bread::Bread( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Bread::Bread");
}
void Bread::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Bread::accept");
  return visitor->visit( this );
}
float Bread::getCalories() const
{
  PrintMessage("Bread::getCalories");
  return 120.0f;
};
float Bread::getCarbs() const
{
  PrintMessage("Bread::getCarbs");
  return 23.0f;
};
float Bread::getProtien() const
{
  PrintMessage("Bread::getProtien");
  return 3.0f;
}
float Bread::getFat() const
{
  PrintMessage("Bread::getFat");
  return 1.0f;
}
float Bread::getCholesterol() const
{
  PrintMessage("Bread::getCholesterol");
  return 0.0f;
}
float Bread::getSodium() const
{
  PrintMessage("Bread::getSodium");
  return 0.306f;
}
bool Bread::isVegetarian() const
{
  PrintMessage("Bread::isVegetarian");
  return true;
}
std::string Bread::toString() const
{
  PrintMessage("Bread::toString");
  std::stringstream result;
  result << "Bread(" << _amount << ")";
  return result.str();
}
