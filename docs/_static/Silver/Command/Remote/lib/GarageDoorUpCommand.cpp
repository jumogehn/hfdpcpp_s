
using namespace HFDP::Command::Remote;

GarageDoorUpCommand::GarageDoorUpCommand( const GarageDoor* garageDoor ) :
  _garageDoor( garageDoor )
{
  assert( garageDoor );
  HUM_TRACE(ACE_TEXT("GarageDoorUpCommand::GarageDoorUpCommand"));
}

void GarageDoorUpCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("GarageDoorUpCommand::execute"));
  _garageDoor->up();
}

