//===--- ChocolateBoiler.cpp - ----------------------------------*- C++ -*-===//
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

#include "ChocolateBoiler.hpp"
#include <iostream>

using namespace HFDP::Factory::Singleton;

ChocolateBoiler::ChocolateBoiler()
{
  _empty = true;
  _boiled = false;
}
ChocolateBoiler::~ChocolateBoiler()
{
  _uniqueInstance = 0;
}

ChocolateBoiler* ChocolateBoiler::getInstance()
{
  if( _uniqueInstance == 0 ) {
    std::cout
      << "Creating unique instance of Chocolate Boiler" << std::endl;
    _uniqueInstance = new ChocolateBoiler();
  }
  std::cout << "Returning instance of Chocolate Boiler"<< std::endl;
  return _uniqueInstance;
}
void ChocolateBoiler::fill()
{	// fill the boiler with a milk/chocolate mixture
  if( isEmpty() ) {
    _empty = false;
    _boiled = false;
  }
}
void ChocolateBoiler::drain()
{	// drain the boiled milk and chocolate
  if( !isEmpty() && isBoiled() ) {
    _empty = true;
  }
}
void ChocolateBoiler::boil()
{	// bring the contents to a boil
  if( !isEmpty() && !isBoiled() ) {
    _boiled = true;
  }
}
bool ChocolateBoiler::isEmpty() const
{
  return _empty;
}
bool ChocolateBoiler::isBoiled() const
{
  return _boiled;
}
