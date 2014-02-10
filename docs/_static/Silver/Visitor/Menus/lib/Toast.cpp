//===--- Toast.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Toast.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <sstream>
#include <string>

using namespace HFDP::Visitor::Menus;

Toast::Toast( Ingredient* ingredient)
: IngredientDecorator( ingredient )
{
  PrintMessage("Toast::Toast");
}
void Toast::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Toast::accept");
  return _ingredient->accept( visitor );;
}
float Toast::getCalories() const
{
  PrintMessage("Toast::getCalories");
  return _ingredient->getCalories(); // no change
}
float Toast::getCarbs() const
{
  PrintMessage("Toast::getCarbs");
  return _ingredient->getCarbs(); // no change
}
float Toast::getProtien() const
{
  PrintMessage("Toast::getProtien");
  return _ingredient->getProtien(); // no change
}
float Toast::getFat() const
{
  PrintMessage("Toast::getFat");
  return _ingredient->getFat(); // no change
}
float Toast::getCholesterol() const
{
  PrintMessage("Toast::getCholesterol");
  return _ingredient->getCholesterol(); // no change
}
float Toast::getSodium() const
{
  PrintMessage("Toast::getSodium");
  return _ingredient->getSodium(); // no change
}
bool Toast::isVegetarian() const
{
  PrintMessage("Toast::isVegetarian");
  return _ingredient->isVegetarian(); // no change
}
std::string Toast::toString() const
{
  PrintMessage("Toast::toString");
  std::string result( "Toast" );
  result.append( "(" );
  result.append( _ingredient->toString() );
  result.append( ")" );
  return result;
}
