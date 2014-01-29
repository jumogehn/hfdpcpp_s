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
#include "Utilities.hpp"
#include <cassert>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  _turkey( turkey )
{
  assert( turkey );

  PrintMessage("TurkeyAdapter::TurkeyAdapter");
}

void TurkeyAdapter::fly() const
{
  assert( _turkey );

  PrintMessage("TurkeyAdapter::fly");
  for( int i = 0; i < 5; i++ ) {
    _turkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  assert( _turkey );

  PrintMessage("TurkeyAdapter::quack");
  _turkey->gobble();
}

