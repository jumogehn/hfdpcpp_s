//===--- Pasta.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Pasta.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Pasta::Pasta( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Pasta::Pasta");
}
void Pasta::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Pasta::accept");
  return visitor->visit( this );
}
float Pasta::getCalories() const
{
  PrintMessage("Pasta::getCalories");
  return 220.0f;
}
float Pasta::getCarbs() const
{
  PrintMessage("Pasta::getCarbs");
  return 43.0f;
}
float Pasta::getProtien() const
{
  PrintMessage("Pasta::getProtien");
  return 8.0f;
}
float Pasta::getFat() const
{
  PrintMessage("Pasta::getFat");
  return 1.0f;
}
float Pasta::getCholesterol() const
{
  PrintMessage("Pasta::getCholesterol");
  return 0.0f;
}
float Pasta::getSodium() const
{
  PrintMessage("Pasta::getSodium");
  return 0.179f;
}
bool Pasta::isVegetarian() const
{
  PrintMessage("Pasta::isVegetarian");
  return true;
}
std::string Pasta::toString() const
{
  PrintMessage("Pasta::toString");
  std::stringstream result;
  result << "Pasta(" << _amount << ")";
  return result.str();
}
