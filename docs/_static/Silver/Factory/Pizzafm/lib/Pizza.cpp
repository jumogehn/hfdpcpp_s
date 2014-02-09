//===--- Pizza.cpp - --------------------------------------------*- C++ -*-===//
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

#include "Pizza.hpp"
#include "Utilities.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <list>

using namespace HFDP::Factory::Method;

Pizza::Pizza()
{
  PrintMessage("Pizza::Pizza");
}

Pizza::~Pizza()
{
  PrintMessage("Pizza::~Pizza");
}
void Pizza::prepare() const
{
  PrintMessage("Pizza::prepare");
  std::cout << "Preparing " << _name.c_str() << std::endl;
  std::cout << "Tossing dough..." << std::endl;
  std::cout << "Adding sauce..." << std::endl;
  std::cout << "Adding toppings: " << std::endl;
  for( std::list< std::string >::iterator iterator = _toppings.begin();
       _toppings.end() != iterator; ++iterator ) {
    std::cout << "   " << iterator->c_str() << std::endl;
  }
}
void Pizza::bake() const
{
  PrintMessage("Pizza::bake");
  std::cout << "Bake for 25 minutes at 350" << std::endl;
}
void Pizza::cut() const
{
  PrintMessage("Pizza::cut");
  std::cout << "Cutting the pizza into diagonal slices" << std::endl;
}
void Pizza::box() const
{
  PrintMessage("Pizza::box");
  std::cout << "Place pizza in official PizzaStore box" << std::endl;
}
std::string Pizza::getName() const
{
  PrintMessage("Pizza::getName");
  return _name;
}
std::string Pizza::toString() const
{
  PrintMessage("Pizza::toString");
  // code to display pizza name and ingredients
  std::stringstream value;
  value << "---- " << _name.c_str() << " ----" << std::endl;
  value << _dough.c_str() << std::endl;
  value << _sauce.c_str() << std::endl;
  for( std::list< std::string >::iterator iterator = _toppings.begin();
       _toppings.end() != iterator; ++iterator ) {
    value << iterator->c_str() << std::endl;
  }
  return value.str();
}
