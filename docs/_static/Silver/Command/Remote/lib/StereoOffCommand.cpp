//===--- StereoOffCommand.cpp - ---------------------------------*- C++ -*-===//
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

#include "StereoOffCommand.hpp"
#include "Utilities.hpp"
#include <cassert>

using namespace HFDP::Command::Remote;

StereoOffCommand::StereoOffCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  PrintMessage("StereoOffCommand::StereoOffCommand");
  assert( stereo );
}

void StereoOffCommand::execute() const
{
  PrintMessage("StereoOffCommand::execute");
  _stereo->off();
}


