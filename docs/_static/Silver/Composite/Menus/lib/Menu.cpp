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


#include "Menu.hpp"
#include "MenuComponent.hpp"
#include "Utilities.hpp"
#include <string>
#include <vector>
#include <iostream>
#include <cassert>
#include <cstdio>

using namespace HFDP::Composite::Menus;

Menu::Menu( const std::string name, const std::string description ) :
  _name( name ), _description( description )
{
  PrintMessage("Menu::Menu");
}
void Menu::add( MenuComponent* menuComponent )
{
  assert( menuComponent );
  PrintMessage("Menu::add");
  _menuComponents.push_back( menuComponent );
}
void Menu::remove( MenuComponent* menuComponent )
{
  assert( menuComponent );
  PrintMessage("Menu::remove");
  ////////////////////////////////////////////////////////////
  // This part is remained as a to-do
  //std::remove( _menuComponents.begin(), _menuComponents.end(),
  //             menuComponent->getName().c_str());
}
MenuComponent* Menu::getChild( int i ) const
{
  PrintMessage("Menu::getChild");
  return _menuComponents[i];
}
std::string Menu::getName() const
{
  PrintMessage("Menu::getName");
  return _name;
}
std::string Menu::getDescription() const
{
  PrintMessage("Menu::getDescription");
  return _description;
}
void Menu::print() const
{
  PrintMessage("Menu::print");
  std::cout << std::endl << getName().c_str();
  std::cout << ", " << getDescription().c_str() << std::endl;
  std::cout << "---------------------" << std::endl;

  std::vector< MenuComponent* >::iterator
    iterator = _menuComponents.begin();
  while( iterator != _menuComponents.end() ) {
    MenuComponent* menuComponent = *iterator++;
    menuComponent->print();
  }
}

