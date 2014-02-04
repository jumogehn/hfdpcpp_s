
using namespace HFDP::Command::Remote;

HottubOnCommand::HottubOnCommand( const Hottub* hottub ) :
  _hottub( hottub )
{
  HUM_TRACE(ACE_TEXT("HottubOnCommand::HottubOnCommand"));
  assert( hottub );
}

void HottubOnCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("HottubOnCommand::execute"));
  _hottub->on();
  _hottub->heat();
  _hottub->bubblesOn();
}

