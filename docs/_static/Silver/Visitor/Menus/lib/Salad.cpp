//===--- Salad.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Salad.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Salad::Salad( std::string description, Ingredient* ingredient,
              Stock* base) :
  _description( description ), _base( base ),
  IngredientDecorator( ingredient )
{
  assert( base );
  PrintMessage("Salad::Salad");
}
void Salad::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Salad::accept");
  return visitor->visit( this );
}
float Salad::getCalories() const
{
  PrintMessage("Salad::getCalories");
  return _ingredient->getCalories() + _base->getCalories();
}
float Salad::getCarbs() const
{
  PrintMessage("Salad::getCarbs");
  return _ingredient->getCarbs() + _base->getCarbs();
}
float Salad::getProtien() const
{
  PrintMessage("Salad::getProtien");
  return _ingredient->getProtien() + _base->getProtien();
}
float Salad::getFat() const
{
  PrintMessage("Salad::getFat");
  return _ingredient->getFat() + _base->getFat();
}
float Salad::getCholesterol() const
{
  PrintMessage("Salad::getCholesterol");
  return _ingredient->getCholesterol() + _base->getCholesterol();
}
float Salad::getSodium() const
{
  PrintMessage("Salad::getSodium");
  return _ingredient->getSodium() + _base->getSodium();
}
bool Salad::isVegetarian() const
{
  PrintMessage("Salad::isVegetarian");
  return _ingredient->isVegetarian();
}
std::string Salad::toString() const
{
  PrintMessage("Salad::toString");
  return _description;
}
