

using namespace HFDP::Command::Remote;

CeilingFan::CeilingFan( const std::string location ) :
  _level( LOW ), _location( location )
{
  HUM_TRACE(ACE_TEXT("CeilingFan::CeilingFan"));
}

void CeilingFan::high() const
{
  HUM_TRACE(ACE_TEXT("CeilingFan::high"));
  _level = HIGH;
  std::cout << _location.c_str()
    << " ceiling fan is on high" << std::endl;
}

void CeilingFan::medium() const
{
  HUM_TRACE(ACE_TEXT("CeilingFan::medium"));
  _level = MEDIUM;
  std::cout << _location.c_str()
    << " ceiling fan is on medium" << std::endl;
}

void CeilingFan::low() const
{
  HUM_TRACE(ACE_TEXT("CeilingFan::low"));
  _level = LOW;
  std::cout << _location.c_str()
    << " ceiling fan is on low" << std::endl;
}

void CeilingFan::off() const
{
  HUM_TRACE(ACE_TEXT("CeilingFan::off"));
  _level = 0;
  std::cout << _location.c_str() << " ceiling fan is off" << std::endl;
}

int CeilingFan::getSpeed() const
{
  HUM_TRACE(ACE_TEXT("CeilingFan::getSpeed"));
  return _level;
}


