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
#include <string>
#include <sstream>
#include <iostream>

using namespace HeadFirstDesignPatterns::Factory::Simple;

Pizza::Pizza()
{
  PrintMessage("Pizza::Pizza");
}

Pizza::~Pizza()
{
  PrintMessage("Pizza::~Pizza");
}
std::string Pizza::getName() const
{
  PrintMessage("Pizza::getName");
  return _name;
}
void Pizza::prepare() const
{
  PrintMessage("Pizza::prepare");
  std::cout << "Preparing " << _name.c_str() << std::endl;
}
void Pizza::bake() const
{
  PrintMessage("Pizza::bake");
  std::cout << "Baking " << _name.c_str() << std::endl;
}
void Pizza::cut() const
{
  PrintMessage("Pizza::cut");
  std::cout << "Cutting " << _name.c_str() << std::endl;
}
void Pizza::box() const
{
  PrintMessage("Pizza::box");
  std::cout << "Boxing " << _name.c_str() << std::endl;
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

