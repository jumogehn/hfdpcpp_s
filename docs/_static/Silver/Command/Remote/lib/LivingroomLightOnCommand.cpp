
using namespace HFDP::Command::Remote;

LivingroomLightOnCommand::LivingroomLightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  HUM_TRACE(ACE_TEXT("LivingroomLightOnCommand::"
                     "LivingroomLightOnCommand"));
}

void LivingroomLightOnCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("LivingroomLightOnCommand::execute"));
  _light->on();
}

