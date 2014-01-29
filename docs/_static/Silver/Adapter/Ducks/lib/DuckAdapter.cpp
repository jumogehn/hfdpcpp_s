//===--- DuckAdapter.cpp - --------------------------------------*- C++ -*-===//
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


#include "DuckAdapter.hpp"
#include <cassert>
#include <iostream>
#ifdef WIN32
//#include <process.h>
#else
#include <stdlib.h>
#endif

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

DuckAdapter::DuckAdapter( const Duck* duck ) :
  _duck ( duck )
{
  assert( _duck.get() );
  std::cout << "DuckAdapter::DuckAdapter" << std::endl;
#ifdef WIN32
  srand( _getpid() );
#else
  srand( getpid() );
#endif
  _random = rand() % 5;
  if( _random == 0 )
    _random = 1;
}

void DuckAdapter::fly() const
{
  assert( _duck.get() );

  std::cout << "DuckAdapter::fly" << std::endl;
  for( int i = 0; i < _random; i++ ) {
    _duck->fly();
  }
}

void DuckAdapter::gobble() const
{
  std::cout << "DuckAdapter::gobble" << std::endl;
  assert( _duck.get() );
  _duck->quack();
}

