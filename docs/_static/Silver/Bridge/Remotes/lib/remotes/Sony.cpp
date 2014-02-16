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


#include "RemotesConfig.h"
#include "Sony.hpp"
#ifdef USE_UTILS
#include <Utilities.hpp>
#else
#include <iostream>
#endif

using namespace HFDP::Bridge::Remotes;

Sony::Sony( const std::string& location ) :
  _location( location )
{}

void Sony::on()
{
#ifdef USE_UTILS
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is on");
#else
  std::cout << "Sony " << _location.c_str() << " TV is on" << std::endl;
#endif
}

void Sony::off()
{
#ifdef USE_UTILS
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" TV is off");
#else
  std::cout << "Sony " << _location.c_str() << " TV is off" << std::endl;
#endif
}

void Sony::tuneChannel( unsigned int channel )
{
#ifdef USE_UTILS
  PrintMessage("Sony ", false);
  PrintMessage(_location.c_str(), false);
  PrintMessage(" tuned to channel ", false);
  PrintNumber(channel);
#else
  std::cout << "Sony " << _location.c_str() << " tuned to channel " << channel << std::endl;
#endif
}

