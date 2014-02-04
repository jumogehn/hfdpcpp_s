
using namespace HFDP::Command::Remote;

StereoOnWithCDCommand::StereoOnWithCDCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  assert( stereo );
  HUM_TRACE(ACE_TEXT("StereoOnWithCDCommand::StereoOnWithCDCommand"));
}

void StereoOnWithCDCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("StereoOnWithCDCommand::execute"));

  _stereo->on();
  _stereo->setCD();
  _stereo->setVolume(11);
}


