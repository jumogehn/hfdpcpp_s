
using namespace HFDP::Command::Remote;

LivingroomLightOffCommand::LivingroomLightOffCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  HUM_TRACE(ACE_TEXT("LivingroomLightOffCommand::"
                     "LivingroomLightOffCommand"));
}

void LivingroomLightOffCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("LivingroomLightOffCommand::execute"));
  _light->off();
}


