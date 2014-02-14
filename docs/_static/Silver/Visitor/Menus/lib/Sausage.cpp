//===--- Sausage.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Sausage.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Sausage::Sausage( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Sausage::Sausage");
}
void Sausage::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Sausage::accept");
  return visitor->visit( this );
}
float Sausage::getCalories() const
{
  PrintMessage("Sausage::getCalories");
  return 94.0f;
}
float Sausage::getCarbs() const
{
  PrintMessage("Sausage::getCarbs");
  return 0.0f;
}
float Sausage::getProtien() const
{
  PrintMessage("Sausage::getProtien");
  return 5.0f;
}
float Sausage::getFat() const
{
  PrintMessage("Sausage::getFat");
  return 8.0f;
}
float Sausage::getCholesterol() const
{
  PrintMessage("Sausage::getCholesterol");
  return 0.23f;
}
float Sausage::getSodium() const
{
  PrintMessage("Sausage::getSodium");
  return 0.184f;
}
bool Sausage::isVegetarian() const
{
  PrintMessage("Sausage::isVegetarian");
  return false;
}
std::string Sausage::toString() const
{
  PrintMessage("Sausage::toString");
  std::stringstream result;
  result << "Sausage(" << _amount << ")";
  return result.str();
}
