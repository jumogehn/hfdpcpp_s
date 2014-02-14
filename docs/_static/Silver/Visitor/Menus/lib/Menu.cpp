//===--- Menu.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Visitor.hpp"
#include "Ingredient.hpp"
#include "Utilities.hpp"
#include <string>
#include <vector>
#include <cassert>

using namespace HFDP::Visitor::Menus;

Menu::Menu( const std::string name, const std::string description ) :
  _name( name ), _description( description )
{
  PrintMessage("Menu::Menu");
}
void Menu::accept( Visitor* visitor )
{
  assert( visitor );
  PrintMessage("Menu::accept");
  visitor->visit( this );
  std::vector< MenuComponent* >::const_iterator iterator
    = _menuComponents.begin();
  while( iterator != _menuComponents.end() ) {
    (*iterator)->accept( visitor );
    ++iterator;
  }
}
float Menu::getHealthRating() const
{
  PrintMessage("Menu::getHealthRating");
  float result = 0.0f;
  std::vector< MenuComponent* >::const_iterator iterator
    = _menuComponents.begin();
  while( iterator != _menuComponents.end() ) {
    result += (*iterator)->getHealthRating();
    ++iterator;
  }
  return result;
}
void Menu::add( MenuComponent* menuComponent )
{
  assert( menuComponent );
  PrintMessage("Menu::add");
  _menuComponents.push_back( menuComponent );
}
bool Menu::isVegetarian() const
{
  PrintMessage("Menu::isVegetarian");
  bool result = true;
  std::vector< MenuComponent* >::const_iterator iterator
    = _menuComponents.begin();
  while( iterator != _menuComponents.end() && true == result ) {
    result = (*iterator)->isVegetarian();
    ++iterator;
  }
  return result;
}
std::string Menu::toString() const
{
  PrintMessage("Menu::toString");
  std::string result( _name );
  result.append( "\t" );
  result.append( _description );
  return result;
}
