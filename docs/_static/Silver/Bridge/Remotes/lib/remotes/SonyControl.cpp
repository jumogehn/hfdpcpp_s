//===--- SonyControl.cpp - --------------------------------------*- C++ -*-===//
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
#include "Sony.hpp"
#include "SonyControl.hpp"
#include <string>

using namespace HFDP::Bridge::Remotes;

SonyControl::SonyControl( const std::string& location ) :
  _currentStation( 0 )
{
  _implementor = new Sony( location );
}

void SonyControl::setStation( unsigned int channel )
{
  _currentStation = channel;
  setChannel( _currentStation );
}

void SonyControl::nextChannel()
{
  _currentStation++;
  setChannel( _currentStation );
}

void SonyControl::previousChannel()
{
  _currentStation--;
  setChannel( _currentStation );
}


