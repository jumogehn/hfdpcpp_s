//===--- Pancake.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Pancake.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Pancake::Pancake( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Pancake::Pancake");
}
void Pancake::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Pancake::accept");
  return visitor->visit( this );
}
float Pancake::getCalories() const
{
  PrintMessage("Pancake::getCalories");
  return 86.0f;
}
float Pancake::getCarbs() const
{
  PrintMessage("Pancake::getCarbs");
  return 11.0f;
}
float Pancake::getProtien() const
{
  PrintMessage("Pancake::getProtien");
  return 2.0f;
}
float Pancake::getFat() const
{
  PrintMessage("Pancake::getFat");
  return 4.0f;
}
float Pancake::getCholesterol() const
{
  PrintMessage("Pancake::getCholesterol");
  return 0.22f;
}
float Pancake::getSodium() const
{
  PrintMessage("Pancake::getSodium");
  return 0.167f;
}
bool Pancake::isVegetarian() const
{
  PrintMessage("Pancake::isVegetarian");
  return true;
}
std::string Pancake::toString() const
{
  PrintMessage("Pancake::toString");
  std::stringstream result;
  result << "Pancake(" << _amount << ")";
  return result.str();
}
