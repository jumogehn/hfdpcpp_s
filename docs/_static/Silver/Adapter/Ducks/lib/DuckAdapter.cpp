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


#include "Ducks.hpp"
#include "DuckAdapter.hpp"
#include <stdio.h>
#ifdef WIN32
#include <process.h>
#else
#include <sys/types.h>
#include <unistd.h>
#endif

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

DuckAdapter::DuckAdapter( const Duck* duck ) :
  _duck ( duck )
{
  assert( _duck.get() );
  fprintf(stdout, "DuckAdapter::DuckAdapter\n");
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

  fprintf(stdout, "DuckAdapter::fly\n");
  for( int i = 0; i < _random; i++ ) {
    _duck->fly();
  }
}

void DuckAdapter::gobble() const
{

  fprintf(stdout, "DuckAdapter::gobble\n");
  assert( _duck.get() );
  _duck->quack();
}

