
using namespace HFDP::Command::Remote;

HottubOffCommand::HottubOffCommand( const Hottub* hottub ) :
  _hottub( hottub )
{
  HUM_TRACE(ACE_TEXT("HottubOffCommand::HottubOffCommand"));
  assert( hottub );
}

void HottubOffCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("HottubOffCommand::execute"));
  _hottub->cool();
  _hottub->off();
}


