//===--- Scrambled.cpp - ----------------------------------------*- C++ -*-===//
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

#include "Scrambled.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Scrambled::Scrambled( Ingredient* ingredient, Ingredient* fat ) :
  _fat( fat ), IngredientDecorator( ingredient )
{
  assert( ingredient ); assert( fat );
  PrintMessage("Scrambled::Scrambled");
}
void Scrambled::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Scrambled::accept");
  return _ingredient->accept( visitor );
}
float Scrambled::getCalories() const
{
  PrintMessage("Scrambled::getCalories");
  return _ingredient->getCalories() + _fat->getCalories();
}
float Scrambled::getCarbs() const
{
  PrintMessage("Scrambled::getCarbs");
  return _ingredient->getCarbs() + _fat->getCarbs();
}
float Scrambled::getProtien() const
{
  PrintMessage("Scrambled::getProtien");
  return _ingredient->getProtien() + _fat->getProtien();
}
float Scrambled::getFat() const
{
  PrintMessage("Scrambled::getFat");
  return _ingredient->getFat() + _fat->getFat();
}
float Scrambled::getCholesterol() const
{
  PrintMessage("Scrambled::getCholesterol");
  return _ingredient->getCholesterol() + _fat->getCholesterol();
}
float Scrambled::getSodium() const
{
  PrintMessage("Scrambled::getSodium");
  return _ingredient->getSodium() + _fat->getSodium();
}
bool Scrambled::isVegetarian() const
{
  PrintMessage("Scrambled::isVegetarian");
  return _ingredient->isVegetarian(); // no effect
}
std::string Scrambled::toString() const
{
  PrintMessage("Scrambled::toString");
  std::string result( "Scrambled" );
  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );
  return result;
}
