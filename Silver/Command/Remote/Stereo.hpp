#ifndef	_HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_STEREO_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class Stereo {

        std::string _location;

      public:
        explicit Stereo( std::string location ) :
          _location( location )
        {}
        void on() const
        {
          std::cout << _location.c_str() << " stereo is on" << std::endl;
        }
        void off() const
        {
          std::cout << _location.c_str() << " stereo is off" << std::endl;
        }
        void setCD() const
        {
          std::cout << _location.c_str() << " stereo is set for CD input"
            << std::endl;
        }
        void setDVD() const
        {
          std::cout << _location.c_str() << " stereo is set for DVD input"
            << std::endl;
        }
        void setRadio() const
        {
          std::cout << _location.c_str() << " stereo is set for Radio"
            << std::endl;
        }
        void setVolume(int volume) const
        {
          assert(volume > 0 && volume < 12);
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
