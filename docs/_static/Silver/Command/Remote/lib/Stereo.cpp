//===--- Stereo.cpp - -------------------------------------------*- C++ -*-===//
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

#include "Stereo.hpp"
#include "Utilities.hpp"
#include <cassert>
#include <iostream>

using namespace HFDP::Command::Remote;

Stereo::Stereo( std::string location ) :
  _location( location )
{
  PrintMessage("Stereo::Stereo");
}
void Stereo::on() const
{
  PrintMessage("Stereo::on");
  std::cout << _location.c_str() << " stereo is on" << std::endl;
}
void Stereo::off() const
{
  PrintMessage("Stereo::off");
  std::cout << _location.c_str() << " stereo is off" << std::endl;
}
void Stereo::setCD() const
{
  PrintMessage("Stereo::setCD");
  std::cout << _location.c_str() << " stereo is set for CD input"
    << std::endl;
}
void Stereo::setDVD() const
{
  PrintMessage("Stereo::setDVD");
  std::cout << _location.c_str() << " stereo is set for DVD input"
    << std::endl;
}
void Stereo::setRadio() const
{
  PrintMessage("Stereo::setRadio");
  std::cout << _location.c_str() << " stereo is set for Radio"
    << std::endl;
}
void Stereo::setVolume(int volume) const
{
  assert(volume > 0 && volume < 12);
  PrintMessage("Stereo::setVolume");
  // code to set the volume
  // valid range: 1-11 (after all 11 is better than 10, right?)
  std::cout << _location.c_str() << " Stereo volume set to "
    << volume << std::endl;
}


