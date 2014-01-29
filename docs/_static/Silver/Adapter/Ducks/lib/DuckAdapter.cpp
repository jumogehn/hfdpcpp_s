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
#include "Utilities.hpp"
#include <cassert>
#ifdef WIN32
#include <process.h>
#else
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#endif

using namespace HFDP::Adapter::Ducks;

DuckAdapter::DuckAdapter( const Duck* duck ) :
  _duck ( duck )
{
  assert( _duck.get() );
  PrintMessage("DuckAdapter::DuckAdapter");
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

  PrintMessage("DuckAdapter::fly");
  for( int i = 0; i < _random; i++ ) {
    _duck->fly();
  }
}

void DuckAdapter::gobble() const
{
  PrintMessage("DuckAdapter::gobble");
  assert( _duck.get() );
  _duck->quack();
}

