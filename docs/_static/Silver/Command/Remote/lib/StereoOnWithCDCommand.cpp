//===--- StereoOnWithCDCommand.cpp - ----------------------------*- C++ -*-===//
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

#include "StereoOnWithCDCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

StereoOnWithCDCommand::StereoOnWithCDCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  assert( stereo );
  PrintMessage("StereoOnWithCDCommand::StereoOnWithCDCommand");
}

void StereoOnWithCDCommand::execute() const
{
  PrintMessage("StereoOnWithCDCommand::execute");

  _stereo->on();
  _stereo->setCD();
  _stereo->setVolume(11);
}


