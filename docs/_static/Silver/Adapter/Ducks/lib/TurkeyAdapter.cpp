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

using namespace HFDP::Adapter::Ducks;

TurkeyAdapter::TurkeyAdapter( const Turkey* turkey ) :
  MyTurkey( turkey )
{
  PrintMessage("TurkeyAdapter::TurkeyAdapter");
}

void TurkeyAdapter::fly() const
{
  PrintMessage("TurkeyAdapter::fly");
  for( int i = 0; i < 5; i++ ) {
    MyTurkey->fly();
  }
}

void TurkeyAdapter::quack() const
{
  PrintMessage("TurkeyAdapter::quack");
  MyTurkey->gobble();
}

