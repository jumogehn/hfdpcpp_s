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


#include "MenuItem.hpp"
#include "Utilities.hpp"
#include <iostream>

using namespace HFDP::Composite::Menus;

MenuItem::MenuItem( const std::string name, const std::string description,
                    bool vegetarian, double price ) :
  _name( name ), _description( description ),
  _vegetarian( vegetarian ), _price( price )
{
  PrintMessage("MenuItem::MenuItem");
}
std::string MenuItem::getName() const
{
  PrintMessage("MenuItem::getName");
  return _name;
}
std::string MenuItem::getDescription() const
{
  PrintMessage("MenuItem::getDescription");
  return _description;
}
double MenuItem::getPrice() const
{
  PrintMessage("MenuItem::getPrice");
  return _price;
}
bool MenuItem::isVegetarian() const
{
  PrintMessage("MenuItem::isVegetarian");
  return _vegetarian;
}
void MenuItem::print() const
{
  PrintMessage("MenuItem::print");
  std::cout << "  " << getName().c_str();
  if( isVegetarian() ) {
    std::cout << "(v)";
  }
  std::cout << ", " << getPrice() << std::endl;
  std::cout << "     -- " << getDescription().c_str() << std::endl;
}
