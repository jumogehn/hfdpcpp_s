#ifndef	_HFDP_CPP_COMMAND_REMOTE_TV_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_TV_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class TV {

        mutable int _channel;
        std::string _location;

      public:
        explicit TV( const std::string location ) :
          _channel( 0 ), _location( location )
        {
          HUM_TRACE(ACE_TEXT("TV::TV"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("TV::on"));
          std::cout << _location.c_str() << " TV is on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("TV::off"));
          std::cout << _location.c_str() << " TV is off" << std::endl;
        }
        void setInputChannel()
        {
          HUM_TRACE(ACE_TEXT("TV::setInputChannel"));
          _channel = 3;
          std::cout << _location.c_str() << " Channel is set for VCR"
            << std::endl;
        }
      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
