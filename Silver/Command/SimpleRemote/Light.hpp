#ifndef	_HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_SIMPLE_REMOTE_LIGHT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace SimpleRemote {

      class Light {

      public:
        Light()
        {
          HUM_TRACE(ACE_TEXT("Light::Light"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Light::on"));
          std::cout << "Light is on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Light::off"));
          std::cout << "Light is off" << std::endl;
        }
      };

    } // namespace SimpleRemote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
