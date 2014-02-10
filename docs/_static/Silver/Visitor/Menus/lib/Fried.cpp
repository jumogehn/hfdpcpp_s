//===--- Fried.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Fried.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Fried::Fried( Ingredient* ingredient, Ingredient* fat ) :
  _fat( fat ), IngredientDecorator( ingredient )
{
  assert( ingredient ); assert( fat );
  PrintMessage("Fried::Fried");
}
void Fried::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Fried::accept");
  return _ingredient->accept( visitor );;
}
float Fried::getCalories() const
{
  PrintMessage("Fried::getCalories");
  return _ingredient->getCalories() + _fat->getCalories();
}
float Fried::getCarbs() const
{
  PrintMessage("Fried::getCarbs");
  return _ingredient->getCarbs() + _fat->getCarbs();
}
float Fried::getProtien() const
{
  PrintMessage("Fried::getProtien");
  return _ingredient->getProtien() + _fat->getProtien();
}
float Fried::getFat() const
{
  PrintMessage("Fried::getFat");
  return _ingredient->getFat() + _fat->getFat();
}
float Fried::getCholesterol() const
{
  PrintMessage("Fried::getCholesterol");
  return _ingredient->getCholesterol() + _fat->getCholesterol();
}
float Fried::getSodium() const
{
  PrintMessage("Fried::getSodium");
  return _ingredient->getSodium() + _fat->getSodium();
}
bool Fried::isVegetarian() const
{
  PrintMessage("Fried::isVegetarian");
  return _ingredient->isVegetarian(); // no effect
}
std::string Fried::toString() const
{
  PrintMessage("Fried::toString");
  std::string result( "Fried" );
  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );
  return result;
}
