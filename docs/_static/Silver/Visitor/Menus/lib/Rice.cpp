//===--- Rice.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Rice.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Rice::Rice( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Rice::Rice");
}
void Rice::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Rice::accept");
  return visitor->visit( this );
}
float Rice::getCalories() const
{
  PrintMessage("Rice::getCalories");
  return 194.0f;
}
float Rice::getCarbs() const
{
  PrintMessage("Rice::getCarbs");
  return 41.0f;
}
float Rice::getProtien() const
{
  PrintMessage("Rice::getProtien");
  return 0.0f;
}
float Rice::getFat() const
{
  PrintMessage("Rice::getFat");
  return 1.0f;
}
float Rice::getCholesterol() const
{
  PrintMessage("Rice::getCholesterol");
  return 0.0f;
}
float Rice::getSodium() const
{
  PrintMessage("Rice::getSodium");
  return 0.3f;
}
bool Rice::isVegetarian() const
{
  PrintMessage("Rice::isVegetarian");
  return true;
}
std::string Rice::toString() const
{
  PrintMessage("Rice::toString");
  std::stringstream result;
  result << "Rice(" << _amount << ")";
  return result.str();
}
