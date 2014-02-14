//===--- Potato.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Potato.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Potato::Potato( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Potato::Potato");
}
void Potato::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Potato::accept");
  return visitor->visit( this );
}
float Potato::getCalories() const
{
  PrintMessage("Potato::getCalories");
  return 57.0f;
};
float Potato::getCarbs() const
{
  PrintMessage("Potato::getCarbs");
  return 13.0f;
};
float Potato::getProtien() const
{
  PrintMessage("Potato::getProtien");
  return 1.0f;
}
float Potato::getFat() const
{
  PrintMessage("Potato::getFat");
  return 0.0f;
}
float Potato::getCholesterol() const
{
  PrintMessage("Potato::getCholesterol");
  return 0.0f;
}
float Potato::getSodium() const
{
  PrintMessage("Potato::getSodium");
  return 0.147f;
}
bool Potato::isVegetarian() const
{
  PrintMessage("Potato::isVegetarian");
  return true;
}
std::string Potato::toString() const
{
  PrintMessage("Potato::toString");
  std::stringstream result;
  result << "Potatp(" << _amount << ")";
  return result.str();
}
