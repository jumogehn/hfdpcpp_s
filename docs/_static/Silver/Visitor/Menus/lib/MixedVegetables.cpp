//===--- MixedVegetables.cpp - ----------------------------------*- C++ -*-===//
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

#include "MixedVegetables.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

MixedVegetables::MixedVegetables( float amount ) :
  Ingredient( amount )
{
  PrintMessage("MixedVegetables::MixedVegetables");
}
void MixedVegetables::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("MixedVegetables::accept");
  return visitor->visit( this );
}
float MixedVegetables::getCalories() const
{
  PrintMessage("MixedVegetables::getCalories");
  return 150.0f;
}
float MixedVegetables::getCarbs() const
{
  PrintMessage("MixedVegetables::getCarbs");
  return 30.0f;
}
float MixedVegetables::getProtien() const
{
  PrintMessage("MixedVegetables::getProtien");
  return 7.0f;
}
float MixedVegetables::getFat() const
{
  PrintMessage("MixedVegetables::getFat");
  return 1.0f;
}
float MixedVegetables::getCholesterol() const
{
  PrintMessage("MixedVegetables::getCholesterol");
  return 0.0f;
}
float MixedVegetables::getSodium() const
{
  PrintMessage("MixedVegetables::getSodium");
  return 0.225f;
}
bool MixedVegetables::isVegetarian() const
{
  PrintMessage("MixedVegetables::isVegetarian");
  return true;
}
std::string MixedVegetables::toString() const
{
  PrintMessage("MixedVegetables::toString");
  std::stringstream result;
  result << "Mixed vegetables(" << _amount << ")";
  return result.str();
}
