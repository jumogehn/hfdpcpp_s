//===--- MenuComponent.cpp - ------------------------------------*- C++ -*-===//
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
#include "UnsupportedOperationException.hpp"
#include "Utilities.hpp"


using namespace HFDP::Composite::Menus;

MenuComponent::MenuComponent()
{
  PrintMessage("MenuComponent::");
}
MenuComponent::~MenuComponent()
{
  PrintMessage("MenuComponent::~MenuComponent");
}
void MenuComponent::add( MenuComponent* menuComponent )
{
  PrintMessage("MenuComponent::add");
  throw new UnsupportedOperationException();
}
void MenuComponent::remove( MenuComponent* menuComponent )
{
  PrintMessage("MenuComponent::remove");
  throw new UnsupportedOperationException();
}
const MenuComponent* MenuComponent::getChild( int i ) const
{
  PrintMessage("MenuComponent::getChild");
  throw new UnsupportedOperationException();
}
std::string MenuComponent::getName() const
{
  PrintMessage("MenuComponent::getName");
  throw new UnsupportedOperationException();
}
std::string MenuComponent::getDescription() const
{
  PrintMessage("MenuComponent::getDescription");
  throw new UnsupportedOperationException();
}
double MenuComponent::getPrice() const
{
  PrintMessage("MenuComponent::getPrice");
  throw new UnsupportedOperationException();
}
bool MenuComponent::isVegetarian() const
{
  PrintMessage("MenuComponent::isVegetarian");
  throw new UnsupportedOperationException();
}
void MenuComponent::print() const
{
  PrintMessage("MenuComponent::print");
  throw new UnsupportedOperationException();
}


