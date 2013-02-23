#ifndef	_HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_LIGHT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class Light {

        std::string _location;

      public:
        explicit Light( const std::string location) :
          _location( location )
        {
          HUM_TRACE(ACE_TEXT("Light::Light"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Light::on"));
          std::cout << _location.c_str() << " light is on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Light::off"));
          std::cout << _location.c_str() << " light is off" << std::endl;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
