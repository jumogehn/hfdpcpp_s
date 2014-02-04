
using namespace HFDP::Command::Remote;

CeilingFanOffCommand::CeilingFanOffCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  HUM_TRACE(ACE_TEXT("CeilingFanOffCommand::CeilingFanOffCommand"));
}
void CeilingFanOffCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("CeilingFanOffCommand::execute"));
  _ceilingFan->off();
}

