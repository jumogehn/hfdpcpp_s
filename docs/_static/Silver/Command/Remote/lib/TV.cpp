
using namespace HFDP::Command::Remote;

TV::TV( const std::string location ) :
  _channel( 0 ), _location( location )
{
  HUM_TRACE(ACE_TEXT("TV::TV"));
}
void TV::on() const
{
  HUM_TRACE(ACE_TEXT("TV::on"));
  std::cout << _location.c_str() << " TV is on" << std::endl;
}
void TV::off() const
{
  HUM_TRACE(ACE_TEXT("TV::off"));
  std::cout << _location.c_str() << " TV is off" << std::endl;
}
void TV::setInputChannel()
{
  HUM_TRACE(ACE_TEXT("TV::setInputChannel"));
  _channel = 3;
  std::cout << _location.c_str() << " Channel is set for VCR"
    << std::endl;
}


