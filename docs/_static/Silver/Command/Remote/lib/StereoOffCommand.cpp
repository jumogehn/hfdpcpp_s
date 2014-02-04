
using namespace HFDP::Command::Remote;

StereoOffCommand::StereoOffCommand( const Stereo* stereo ) :
  _stereo( stereo )
{
  HUM_TRACE(ACE_TEXT("StereoOffCommand::StereoOffCommand"));
  assert( stereo );
}

void StereoOffCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("StereoOffCommand::execute"));
  _stereo->off();
}


