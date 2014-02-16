//===--- RemoteControl.cpp - ------------------------------------*- C++ -*-===//
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


#include "RemotesConfig.h"
#include "RemoteControl.hpp"
#include <cassert>

using namespace HFDP::Bridge::Remotes;

RemoteControl::RemoteControl() :
  _implementor( 0 )
{}

void RemoteControl::setChannel( unsigned int channel )
{
  assert( _implementor );
  _implementor->tuneChannel( channel );
}

RemoteControl::~RemoteControl()
{
  delete _implementor;
}

void RemoteControl::on()
{
  assert( _implementor );
  _implementor->on();
}

void RemoteControl::off()
{
  assert( _implementor );
  _implementor->off();
}

