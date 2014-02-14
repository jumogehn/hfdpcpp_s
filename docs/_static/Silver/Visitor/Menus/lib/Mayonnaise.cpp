//===--- Mayonnaise.cpp - ---------------------------------------*- C++ -*-===//
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

#include "Mayonnaise.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Mayonnaise::Mayonnaise( float amount ) :
  Ingredient( amount )
{
  PrintMessage("Mayonnaise::Mayonnaise");
}
void Mayonnaise::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Mayonnaise::accept");
  return visitor->visit( this );
}
float Mayonnaise::getCalories() const
{
  PrintMessage("Mayonnaise::getCalories");
  return 916.0f;
};
float Mayonnaise::getCarbs() const
{
  PrintMessage("Mayonnaise::getCarbs");
  return 56.0f;
};
float Mayonnaise::getProtien() const
{
  PrintMessage("Mayonnaise::getProtien");
  return 2.0f;
}
float Mayonnaise::getFat() const
{
  PrintMessage("Mayonnaise::getFat");
  return 78.0f;
}
float Mayonnaise::getCholesterol() const
{
  PrintMessage("Mayonnaise::getCholesterol");
  return 0.61f;
}
float Mayonnaise::getSodium() const
{
  PrintMessage("Mayonnaise::getSodium");
  return 1.671f;
}
bool Mayonnaise::isVegetarian() const
{
  PrintMessage("Mayonnaise::isVegetarian");
  return true;
}
std::string Mayonnaise::toString() const
{
  PrintMessage("Mayonnaise::toString");
  std::stringstream result;
  result << "Mayonnaise(" << _amount << ")";
  return result.str();
}
