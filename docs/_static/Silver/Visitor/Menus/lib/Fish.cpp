//===--- Fish.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Fish.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Fish::Fish( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Fish::Fish");
}
void Fish::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Fish::accept");
  return visitor->visit( this );
}
float Fish::getCalories() const
{
  PrintMessage("Fish::getCalories");
  return 189.0f;
};
float Fish::getCarbs() const
{
  PrintMessage("Fish::getCarbs");
  return 0.0f;
};
float Fish::getProtien() const
{
  PrintMessage("Fish::getProtien");
  return 41.0f;
}
float Fish::getFat() const
{
  PrintMessage("Fish::getFat");
  return 2.0f;
}
float Fish::getCholesterol() const
{
  PrintMessage("Fish::getCholesterol");
  return 0.99f;
}
float Fish::getSodium() const
{
  PrintMessage("Fish::getSodium");
  return 0.125f;
}
bool Fish::isVegetarian() const
{
  PrintMessage("Fish::isVegetarian");
  return true;
}
std::string Fish::toString() const
{
  PrintMessage("Fish::toString");
  std::stringstream result;
  result << "Fish(" << _amount << ")";
  return result.str();
}
