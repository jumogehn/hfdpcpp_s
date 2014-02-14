//===--- MenuItem.cpp - -----------------------------------------*- C++ -*-===//
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

#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Utilities.hpp"
#include <string>
#include <sstream>
#include <list>
#include <cassert>

using namespace HFDP::Visitor::Menus;

MenuItem::MenuItem( const std::string name, const std::string description,
                    double price ) :
  _name( name ), _description( description ), _price( price )
{
  PrintMessage("MenuItem::MenuItem");
}
void MenuItem::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("MenuItem::accept");
  visitor->visit( this );
  std::list< Ingredient* >::const_iterator iterator
    = _ingredients.begin();
  while( iterator != _ingredients.end() ) {
    ( *iterator )->accept( visitor );
    ++iterator;
  }
}
void MenuItem::add( Ingredient* ingredient )
{
  assert( ingredient );
  PrintMessage("MenuItem::add");
  _ingredients.push_back( ingredient );
}
double MenuItem::getPrice() const
{
  PrintMessage("MenuItem::getPrice");
  return _price;
}
float MenuItem::getHealthRating() const
{
  PrintMessage("MenuItem::getHealthRating");
  float result = 0.0f;
  std::list< Ingredient* >::const_iterator iterator
    = _ingredients.begin();
  while( iterator != _ingredients.end() ) {
    result += ( *iterator )->getHealthRating();
    ++iterator;
  }
  return result;
}

bool MenuItem::isVegetarian() const
{
  PrintMessage("MenuItem::isVegetarian");
  bool result = true;
  std::list< Ingredient* >::const_iterator iterator
    = _ingredients.begin();
  while( iterator != _ingredients.end() && true == result ) {
    result = ( *iterator )->isVegetarian();
    ++iterator;
  }
  return result;
}
std::string MenuItem::toString() const
{
  PrintMessage("MenuItem::toString");
  std::stringstream result;
  result << _name;
  if ( true == isVegetarian() ) {
    result << " (v)";
  }
  result << " $" << getPrice();
  result << "\t";
  result << _description;

  //std::list<std::pair<Ingredient*,float> >::const_iterator iterator
  //  = _ingredients.begin();
  //while( iterator != _ingredients.end() ) {
  //	result << "\t";
  //	result << ( *iterator ).first->toString();
  //	result << " x " << ( *iterator ).second;
  //	++iterator;
  //}

  return result.str();
}
