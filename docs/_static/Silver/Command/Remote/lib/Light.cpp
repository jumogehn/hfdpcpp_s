
using namespace HFDP::Command::Remote;

explicit Light::Light( const std::string location) :
  _location( location )
{
  HUM_TRACE(ACE_TEXT("Light::Light"));
}
void Light::on() const
{
  HUM_TRACE(ACE_TEXT("Light::on"));
  std::cout << _location.c_str() << " light is on" << std::endl;
}
void Light::off() const
{
  HUM_TRACE(ACE_TEXT("Light::off"));
  std::cout << _location.c_str() << " light is off" << std::endl;
}


