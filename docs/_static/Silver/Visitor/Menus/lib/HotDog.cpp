//===--- HotDog.cpp - -------------------------------------------*- C++ -*-===//
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

#include "HotDog.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Hotdog::Hotdog( float amount /*= 1.0f*/ ) :
  Ingredient( amount )
{
  PrintMessage("Hotdog::Hotdog");
}
void Hotdog::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Hotdog::accept");
  return visitor->visit( this );
}
float Hotdog::getCalories() const
{
  PrintMessage("Hotdog::getCalories");
  return 242.0f;
};
float Hotdog::getCarbs() const
{
  PrintMessage("Hotdog::getCarbs");
  return 18.0f;
};
float Hotdog::getProtien() const
{
  PrintMessage("Hotdog::getProtien");
  return 10.0f;
}
float Hotdog::getFat() const
{
  PrintMessage("Hotdog::getFat");
  return 15.0f;
}
float Hotdog::getCholesterol() const
{
  PrintMessage("Hotdog::getCholesterol");
  return 0.44f;
}
float Hotdog::getSodium() const
{
  PrintMessage("Hotdog::getSodium");
  return 0.670f;
}
bool Hotdog::isVegetarian() const
{
  PrintMessage("Hotdog::isVegetarian");
  return false;
}
std::string Hotdog::toString() const
{
  PrintMessage("Hotdog::toString");
  std::stringstream result;
  result << "Hotdog(" << _amount << ")";
  return result.str();
}
