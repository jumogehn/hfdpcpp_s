
using namespace HFDP::Command::Remote;

GarageDoorDownCommand::GarageDoorDownCommand( const GarageDoor* garageDoor ) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  HUM_TRACE(ACE_TEXT("GarageDoorDownCommand::GarageDoorDownCommand"));
}

void GarageDoorDownCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("GarageDoorDownCommand::execute"));
  _garageDoor->down();
}

