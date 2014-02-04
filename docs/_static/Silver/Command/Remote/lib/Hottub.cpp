
using namespace HFDP::Command::Remote;

Hottub::Hottub() :
  _on( false ), _temperature( 0 )
{
  HUM_TRACE(ACE_TEXT("Hottub::Hottub"));
}
void Hottub::on() const
{
  HUM_TRACE(ACE_TEXT("Hottub::on"));
  _on = true;
}
void Hottub::off() const
{
  HUM_TRACE(ACE_TEXT("Hottub::off"));
  _on = false;
}
void Hottub::bubblesOn() const
{
  HUM_TRACE(ACE_TEXT("Hottub::bubblesOn"));
  if( _on ) {
    std::cout << "Hottub is bubbling!" << std::endl;
  }
}
void Hottub::bubblesOff() const
{
  HUM_TRACE(ACE_TEXT("Hottub::bubblesOff"));
  if( _on ) {
    std::cout << "Hottub is not bubbling" << std::endl;
  }
}
void Hottub::jetsOn() const
{
  HUM_TRACE(ACE_TEXT("Hottub::jetsOn"));
  if( _on ) {
    std::cout << "Hottub jets are on" << std::endl;
  }
}
void Hottub::jetsOff() const
{
  HUM_TRACE(ACE_TEXT("Hottub::jetsOff"));
  if( _on ) {
    std::cout << "Hottub jets are off" << std::endl;
  }
}
void Hottub::setTemperature( int temperature )
{
  HUM_TRACE(ACE_TEXT("Hottub::setTemperature"));
  assert( temperature >= 0 );
  _temperature = temperature;
}
void Hottub::heat() const
{
  HUM_TRACE(ACE_TEXT("Hottub::heat"));
  _temperature = 105;
  std::cout << "Hottub is heating to a steaming 105 degrees"
    << std::endl;
}
void Hottub::cool() const
{
  HUM_TRACE(ACE_TEXT("Hottub::cool"));
  _temperature = 98;
  std::cout << "Hottub is cooling to 98 degrees" << std::endl;
}


