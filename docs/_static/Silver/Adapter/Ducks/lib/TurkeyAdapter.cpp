//===--- TurkeyAdapter.cpp - ------------------------------------*- C++ -*-===//
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

#include "TurkeyAdapter.hpp"
#include <iostream>
#include <cassert>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  _turkey( turkey )
{
  assert( turkey );

  std::cout << "TurkeyAdapter::TurkeyAdapter" << std::endl;
}

void TurkeyAdapter::fly() const
{
  assert( _turkey );

  std::cout << "TurkeyAdapter::fly" << std::endl;
  for( int i = 0; i < 5; i++ ) {
    _turkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  assert( _turkey );

  std::cout << "TurkeyAdapter::quack" << std::endl;
  _turkey->gobble();
}

