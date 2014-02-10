//===--- Soup.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Soup.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Soup::Soup( std::string description, Ingredient* ingredient,
            Stock* base) :
  _description( description), _base( base ),
  IngredientDecorator( ingredient )
{
  assert( base );
  PrintMessage("Soup::Soup");
}
void Soup::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Soup::accept");
  return visitor->visit( this );
}
float Soup::getCalories() const
{
  PrintMessage("Soup::getCalories");
  return _ingredient->getCalories() + _base->getCalories();
}
float Soup::getCarbs() const
{
  PrintMessage("Soup::getCarbs");
  return _ingredient->getCarbs() + _base->getCarbs();
}
float Soup::getProtien() const
{
  PrintMessage("Soup::getProtien");
  return _ingredient->getProtien() + _base->getProtien();
}
float Soup::getFat() const
{
  PrintMessage("Soup::getFat");
  return _ingredient->getFat() + _base->getFat();
}
float Soup::getCholesterol() const
{
  PrintMessage("Soup::getCholesterol");
  return _ingredient->getCholesterol() + _base->getCholesterol();
}
float Soup::getSodium() const
{
  PrintMessage("Soup::getSodium");
  return _ingredient->getSodium() + _base->getSodium();
}
bool Soup::isVegetarian() const
{
  PrintMessage("Soup::isVegetarian");
  return _ingredient->isVegetarian();
}
std::string Soup::toString() const
{
  PrintMessage("Soup::toString");
  return _description;
}
