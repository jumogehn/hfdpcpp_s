
using namespace HFDP::Command::Remote;

GarageDoor::GarageDoor( const std::string location ) :
  _location( location )
{
  HUM_TRACE(ACE_TEXT("GarageDoor::GarageDoor"));
}

void GarageDoor::up() const
{
  HUM_TRACE(ACE_TEXT("GarageDoor::up"));
  std::cout << _location.c_str() << " Door is Up" << std::endl;
}

void GarageDoor::down() const
{
  HUM_TRACE(ACE_TEXT("GarageDoor::down"));
  std::cout << _location.c_str() << " Door is Down" << std::endl;
}

void GarageDoor::stop() const
{
  HUM_TRACE(ACE_TEXT("GarageDoor::stop"));
  std::cout << _location.c_str() << " Door is Stopped" << std::endl;
}

void GarageDoor::lightOn() const
{
  HUM_TRACE(ACE_TEXT("GarageDoor::lightOn"));
  std::cout << _location.c_str() << " light is on" << std::endl;
}

void GarageDoor::lightOff() const
{
  HUM_TRACE(ACE_TEXT("GarageDoor::lightOff"));
  std::cout << _location.c_str() << " light is off" << std::endl;
}


