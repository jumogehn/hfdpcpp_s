
using namespace HFDP::Command::Remote;

explicit Stereo::Stereo( std::string location ) :
  _location( location )
{
  HUM_TRACE(ACE_TEXT("Stereo::Stereo"));
}
void Stereo::on() const
{
  HUM_TRACE(ACE_TEXT("Stereo::on"));
  std::cout << _location.c_str() << " stereo is on" << std::endl;
}
void Stereo::off() const
{
  HUM_TRACE(ACE_TEXT("Stereo::off"));
  std::cout << _location.c_str() << " stereo is off" << std::endl;
}
void Stereo::setCD() const
{
  HUM_TRACE(ACE_TEXT("Stereo::setCD"));
  std::cout << _location.c_str() << " stereo is set for CD input"
    << std::endl;
}
void Stereo::setDVD() const
{
  HUM_TRACE(ACE_TEXT("Stereo::setDVD"));
  std::cout << _location.c_str() << " stereo is set for DVD input"
    << std::endl;
}
void Stereo::setRadio() const
{
  HUM_TRACE(ACE_TEXT("Stereo::setRadio"));
  std::cout << _location.c_str() << " stereo is set for Radio"
    << std::endl;
}
void Stereo::setVolume(int volume) const
{
  assert(volume > 0 && volume < 12);
  HUM_TRACE(ACE_TEXT("Stereo::setVolume"));
  // code to set the volume
  // valid range: 1-11 (after all 11 is better than 10, right?)
  std::cout << _location.c_str() << " Stereo volume set to "
    << volume << std::endl;
}


