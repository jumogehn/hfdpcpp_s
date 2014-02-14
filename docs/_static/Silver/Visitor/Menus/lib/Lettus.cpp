//===--- Lettus.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Lettus.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>


using namespace HFDP::Visitor::Menus;

Lettus::Lettus( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Lettus::Lettus");
}
void Lettus::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Lettus::accept");
  return visitor->visit( this );
}
float Lettus::getCalories() const
{
  PrintMessage("Lettus::getCalories");
  return 1.0f;
};
float Lettus::getCarbs() const
{
  PrintMessage("Lettus::getCarbs");
  return 0.0f;
};
float Lettus::getProtien() const
{
  PrintMessage("Lettus::getProtien");
  return 0.0f;
}
float Lettus::getFat() const
{
  PrintMessage("Lettus::getFat");
  return 0.0f;
}
float Lettus::getCholesterol() const
{
  PrintMessage("Lettus::getCholesterol");
  return 0.0f;
}
float Lettus::getSodium() const
{
  PrintMessage("Lettus::getSodium");
  return 0.0f;
}
bool Lettus::isVegetarian() const
{
  PrintMessage("Lettus::isVegetarian");
  return true;
}
std::string Lettus::toString() const
{
  PrintMessage("Lettus::toString");
  std::stringstream result;
  result << "Lettus(" << _amount << ")";
  return result.str();
}
