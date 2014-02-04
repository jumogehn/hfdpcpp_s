
using namespace HFDP::Command::Remote;

LightOffCommand::LightOffCommand( const Light* light  ) :
  _light( light )
{
  assert( light );
  HUM_TRACE(ACE_TEXT("LightOffCommand::LightOffCommand"));
}

void LightOffCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("LightOffCommand::execute"));
  _light->off();
}


