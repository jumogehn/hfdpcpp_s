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
#include "Ducks.hpp"
#include <stdio.h>

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  _turkey( turkey )
{
  assert( turkey );

  fprintf(stdout, "TurkeyAdapter::TurkeyAdapter\n");
}

void TurkeyAdapter::fly() const
{
  assert( _turkey );

  fprintf(stdout, "TurkeyAdapter::fly\n");
  for( int i = 0; i < 5; i++ ) {
    _turkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  assert( _turkey );

  fprintf(stdout, "TurkeyAdapter::quack\n");
  _turkey->gobble();
}

