//===--- Egg.cpp - ----------------------------------------------*- C++ -*-===//
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

#include "Egg.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Egg::Egg( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Egg::Egg");
}
void Egg::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Egg::accept");
  return visitor->visit( this );
}
float Egg::getCalories() const
{
  PrintMessage("Egg::getCalories");
  return 54.0f;
};
float Egg::getCarbs() const
{
  PrintMessage("Egg::getCarbs");
  return 0.3f;
};
float Egg::getProtien() const
{
  PrintMessage("Egg::getProtien");
  return 4.7f;
}
float Egg::getFat() const
{
  PrintMessage("Egg::getFat");
  return 3.7f;
}
float Egg::getCholesterol() const
{
  PrintMessage("Egg::getCholesterol");
  return 0.156f;
}
float Egg::getSodium() const
{
  PrintMessage("Egg::getSodium");
  return 0.052f;
}
bool Egg::isVegetarian() const
{
  PrintMessage("Egg::isVegetarian");
  return true;
}
std::string Egg::toString() const
{
  PrintMessage("Egg::toString");
  std::stringstream result;
  result << "Egg(" << _amount << ")";
  return result.str();
}
