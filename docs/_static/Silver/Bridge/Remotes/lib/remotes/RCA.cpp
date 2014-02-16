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


#include "RemotesConfig.h"
#include "RCA.hpp"
#ifdef USE_UTILS
#include "Utilities.hpp"
#else
#include <iostream>
#endif

using namespace HFDP::Bridge::Remotes;

RCA::RCA( const std::string& location ) :
  _location( location )
{}

void RCA::on()
{
#ifdef USE_UTILS
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is on");
#else
  std::cout << "RCA " << _location.c_str() << " TV is on" << std::endl;
#endif
}

void RCA::off()
{
#ifdef USE_UTILS
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is off");
#else
  std::cout << "RCA " << _location.c_str() << " TV is off" << std::endl;
#endif
}

void RCA::tuneChannel(unsigned int channel)
{
#ifdef USE_UTILS
  PrintMessage("RCA ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" tuned to channel ", false);
  PrintNumber(channel);
#else
  std::cout << "RCA " << _location.c_str() << " tuned to channel " << channel << std::endl;
#endif
}

