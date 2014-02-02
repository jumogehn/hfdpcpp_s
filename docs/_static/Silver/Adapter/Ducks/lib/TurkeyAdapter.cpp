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

using namespace HFDP::Adapter::Ducks;

TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  MyTurkey( turkey )
{
  //assert( MyTurkey->get() );

  PrintMessage("TurkeyAdapter::TurkeyAdapter");
}

void TurkeyAdapter::fly() const
{
  //assert( MyTurkey->get() );

  PrintMessage("TurkeyAdapter::fly");
  for( int i = 0; i < 5; i++ ) {
    MyTurkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  //assert( MyTurkey->get() );

  PrintMessage("TurkeyAdapter::quack");
  MyTurkey->gobble();
}

