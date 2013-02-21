#ifndef	_HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_HOT_TUB_HPP_

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
        {}
        void on() const
        {
          _on = true;
        }
        void off() const
        {
          _on = false;
        }
        void bubblesOn() const
        {
          if( _on ) {
            std::cout << "Hottub is bubbling!" << std::endl;
          }
        }
        void bubblesOff() const
        {
          if( _on ) {
            std::cout << "Hottub is not bubbling" << std::endl;
          }
        }
        void jetsOn() const
        {
          if( _on ) {
            std::cout << "Hottub jets are on" << std::endl;
          }
        }
        void jetsOff() const
        {
          if( _on ) {
            std::cout << "Hottub jets are off" << std::endl;
          }
        }
        void setTemperature( int temperature )
        {
          assert( temperature >= 0 );
          _temperature = temperature;
        }
        void heat() const
        {
          _temperature = 105;
          std::cout << "Hottub is heating to a steaming 105 degrees"
            << std::endl;
        }
        void cool() const
        {
          _temperature = 98;
          std::cout << "Hottub is cooling to 98 degrees" << std::endl;
        }

      };

    } // namespace Remote
  } // namespace Command
} // namespace HeadFirstDesignPatterns

#endif
