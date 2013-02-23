#ifndef	_HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class Stereo {

        std::string _location;

      public:
        explicit Stereo( std::string location ) :
          _location( location )
        {
          HUM_TRACE(ACE_TEXT("Stereo::Stereo"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Stereo::on"));
          std::cout << _location.c_str() << " stereo is on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Stereo::off"));
          std::cout << _location.c_str() << " stereo is off" << std::endl;
        }
        void setCD() const
        {
          HUM_TRACE(ACE_TEXT("Stereo::setCD"));
          std::cout << _location.c_str() << " stereo is set for CD input"
            << std::endl;
        }
        void setDVD() const
        {
          HUM_TRACE(ACE_TEXT("Stereo::setDVD"));
          std::cout << _location.c_str() << " stereo is set for DVD input"
            << std::endl;
        }
        void setRadio() const
        {
          HUM_TRACE(ACE_TEXT("Stereo::setRadio"));
          std::cout << _location.c_str() << " stereo is set for Radio"
            << std::endl;
        }
        void setVolume(int volume) const
        {
          assert(volume > 0 && volume < 12);
          HUM_TRACE(ACE_TEXT("Stereo::setVolume"));
          // code to set the volume
          // valid range: 1-11 (after all 11 is better than 10, right?)
          std::cout << _location.c_str() << " Stereo volume set to "
            << volume << std::endl;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
