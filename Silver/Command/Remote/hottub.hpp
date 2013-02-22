#ifndef	_HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
  namespace Command {
    namespace Remote {

      class Hottub {

        mutable bool _on;
        mutable int _temperature;

      public:
        Hottub() :
          _on( false ), _temperature( 0 )
        {
          HUM_TRACE(ACE_TEXT("Hottub::Hottub"));
        }
        void on() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::on"));
          _on = true;
        }
        void off() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::off"));
          _on = false;
        }
        void bubblesOn() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::bubblesOn"));
          if( _on ) {
            std::cout << "Hottub is bubbling!" << std::endl;
          }
        }
        void bubblesOff() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::bubblesOff"));
          if( _on ) {
            std::cout << "Hottub is not bubbling" << std::endl;
          }
        }
        void jetsOn() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::jetsOn"));
          if( _on ) {
            std::cout << "Hottub jets are on" << std::endl;
          }
        }
        void jetsOff() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::jetsOff"));
          if( _on ) {
            std::cout << "Hottub jets are off" << std::endl;
          }
        }
        void setTemperature( int temperature )
        {
          HUM_TRACE(ACE_TEXT("Hottub::setTemperature"));
          assert( temperature >= 0 );
          _temperature = temperature;
        }
        void heat() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::heat"));
          _temperature = 105;
          std::cout << "Hottub is heating to a steaming 105 degrees"
            << std::endl;
        }
        void cool() const
        {
          HUM_TRACE(ACE_TEXT("Hottub::cool"));
          _temperature = 98;
          std::cout << "Hottub is cooling to 98 degrees" << std::endl;
        }

      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
