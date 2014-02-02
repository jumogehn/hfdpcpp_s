//===--- RCA.cpp - ----------------------------------------------*- C++ -*-===//
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


#include "RCA.hpp"
#include "Utilities.hpp"

using namespace HFDP::Bridge::Remotes;

RCA::RCA( const std::string& location ) :
  _location( location )
{}

void RCA::on()
{
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is on");
}

void RCA::off()
{
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is off");
}

void RCA::tuneChannel(unsigned int channel)
{
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" tuned to channel ", false);
  PrintMessage(channel);
}

