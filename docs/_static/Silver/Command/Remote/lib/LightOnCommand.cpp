
using namespace HFDP::Command::Remote;

LightOnCommand::LightOnCommand( const Light* light ) :
  _light( light )
{
  assert( light );
  HUM_TRACE(ACE_TEXT("LightOnCommand::LightOnCommand"));
}

void LightOnCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("LightOnCommand::execute"));
  _light->on();
}


