
using namespace HFDP::Command::Remote;

CeilingFanOnCommand::CeilingFanOnCommand( const CeilingFan* ceilingFan ) :
  _ceilingFan( ceilingFan )
{
  assert( ceilingFan );
  HUM_TRACE(ACE_TEXT("CeilingFanOnCommand::CeilingFanOnCommand"));
}

void CeilingFanOnCommand::execute() const
{
  HUM_TRACE(ACE_TEXT("CeilingFanOnCommand::execute"));
  _ceilingFan->high();
}

