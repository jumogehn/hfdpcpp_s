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
#include <iostream>
#include <sstream>
#include <vector>

using namespace HFDP::Factory::Abstract;

Pizza::Pizza()
{
  PrintMessage("Pizza::Pizza");
}

Pizza::~Pizza()
{
  PrintMessage("Pizza::~Pizza");
  for( std::vector< Veggies* >::iterator iterator = _veggies.begin();
       _veggies.end() != iterator; ++iterator ) {
    delete *iterator;
  }
  _veggies.clear();
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
void Pizza::setName( std::string name)
{
  PrintMessage("Pizza::setName");
  _name = name;
}
std::string Pizza::getName() const
{
  PrintMessage("Pizza::getName");
  return _name;
}
std::string Pizza::toString() const
{
  PrintMessage("Pizza::toString");
  std::stringstream value;
  value << "---- " << _name.c_str() << " ----" << std::endl;

  if( _dough.get() != 0 ) {
    value << _dough->toString();
    value << std::endl;
  }
  if( _sauce.get() != 0 ) {
    value << _sauce->toString();
    value << std::endl;
  }
  if( _cheese.get() != 0 ) {
    value << _cheese->toString();
    value << std::endl;
  }
  if( _clam.get() != 0 ) {
    value << _clam->toString();
    value << std::endl;
  }
  if( _pepperoni.get() != 0 ) {
    value << _pepperoni->toString();
    value << std::endl;
  }
  if( _veggies.size() != 0 ) {
    for( std::vector< Veggies* >::iterator iterator = _veggies.begin();
         _veggies.end() != iterator; ++iterator ) {
      value << ( *iterator )->toString() << ", ";
    }
    value << std::endl;
  }

  return value.str();
}
