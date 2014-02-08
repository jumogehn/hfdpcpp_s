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
#include "MenuIterator.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <cassert>

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
  //////////////////////////////////////////////////////////////
  //std::remove( _menuComponents.begin(), _menuComponents.end(),
  //             menuComponent );
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

  //There might be a memory leak!! ^^;
  Iterator<MenuComponent>* menuIterator
    = createIterator();

  while( menuIterator->hasNext() ) {
    MenuComponent* menuComponent = dynamic_cast<MenuComponent * >
      ( menuIterator->next() );
    menuComponent->print();
  }
}

Iterator<MenuComponent>* Menu::createIterator() const
{
  PrintMessage("PancakeHouseMenu::createIterator");
  return dynamic_cast<Iterator<MenuComponent>* > (
    new MenuIterator(_menuComponents) );
}

