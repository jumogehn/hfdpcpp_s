//===--- Sony.cpp - ---------------------------------------------*- C++ -*-===//
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


#include "Sony.hpp"
#include <Utilities.hpp>

using namespace HFDP::Bridge::Remotes;

Sony::Sony( const std::string& location ) :
  _location( location )
{}

void Sony::on()
{
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is on");
}

void Sony::off()
{
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is off");
}

void Sony::tuneChannel( unsigned int channel )
{
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" tuned to channel ", false);
  PrintNumber(channel);
}

