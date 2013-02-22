#ifndef	_HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_
#define _HFDP_CPP_COMMAND_UNDO_LIGHT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Undo {

      class Light {

        std::string _location;
        mutable int _level;

      public:
        explicit Light( const std::string location ) :
          _location( location ), _level( 0 )
        {
          HUM_TRACE(ACE_TEXT("Light::Light"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Light::on"));
          _level = 100;
          std::cout << _location.c_str() << " light is on" << std::endl;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Light::off"));
          _level = 0;
          std::cout << _location.c_str() << " light is off" << std::endl;
        }
        void dim( int level ) const
        {
          HUM_TRACE(ACE_TEXT("Light::dim"));
          _level = level;
          if( _level == 0 ) {
            off();
          } else {
            std::cout << "Light is dimmed to " << _level << "%" << std::endl;
          }
        }
        int getLevel() const
        {
          HUM_TRACE(ACE_TEXT("Light::getLevel"));
          return _level;
        }
      };

    } // namespace Undo
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
