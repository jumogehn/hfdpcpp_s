//===--- BlueBerries.cpp - --------------------------------------*- C++ -*-===//
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

#include "BlueBerries.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

BlueBerries::BlueBerries( float amount ) :
  Ingredient( amount )
{
  PrintMessage("BlueBerries::BlueBerries");
}
void BlueBerries::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("BlueBerries::accept");
  return visitor->visit( this );
}
float BlueBerries::getCalories() const
{
  PrintMessage("BlueBerries::getCalories");
  return 83.0f;
};
float BlueBerries::getCarbs() const
{
  PrintMessage("BlueBerries::getCarbs");
  return 21.0f;
};
float BlueBerries::getProtien() const
{
  PrintMessage("BlueBerries::getProtien");
  return 1.0f;
}
float BlueBerries::getFat() const
{
  PrintMessage("BlueBerries::getFat");
  return 0.0f;
}
float BlueBerries::getCholesterol() const
{
  PrintMessage("BlueBerries::getCholesterol");
  return 0.0f;
}
float BlueBerries::getSodium() const
{
  PrintMessage("BlueBerries::getSodium");
  return 0.1f;
}
bool BlueBerries::isVegetarian() const
{
  PrintMessage("BlueBerries::isVegetarian");
  return true;
}
std::string BlueBerries::toString() const
{
  PrintMessage("BlueBerries::toString");
  std::stringstream result;
  result << "Blue berries(" << _amount << ")";
  return result.str();
}
