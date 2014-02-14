//===--- Oil.cpp - ----------------------------------------------*- C++ -*-===//
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

#include "Oil.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Oil::Oil( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Oil::Oil");
}
void Oil::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Oil::accept");
  return visitor->visit( this );
}
float Oil::getCalories() const
{
  PrintMessage("Oil::getCalories");
  return 500.0f;
}
float Oil::getCarbs() const
{
  PrintMessage("Oil::getCarbs");
  return 0.0f;
}
float Oil::getProtien() const
{
  PrintMessage("Oil::getProtien");
  return 0.0f;
}
float Oil::getFat() const
{
  PrintMessage("Oil::getFat");
  return 218.0f;
}
float Oil::getCholesterol() const
{
  PrintMessage("Oil::getCholesterol");
  return 0.0f;
}
float Oil::getSodium() const
{
  PrintMessage("Oil::getSodium");
  return 0.0f;
}
bool Oil::isVegetarian() const
{
  PrintMessage("Oil::isVegetarian");
  return false;
}
std::string Oil::toString() const
{
  PrintMessage("Oil::toString");
  std::stringstream result;
  result << "Oil(" << _amount << ")";
  return result.str();
}
