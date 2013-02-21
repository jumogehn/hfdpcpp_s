#ifndef	_HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_

#include "Remotes.hpp"

namespace HeadFirstDesignPatterns {
  namespace Bridge {
    namespace Remotes {

      class RemoteControl {

        RemoteControl( const RemoteControl& ); // Disable copy constructor
        void operator=( const RemoteControl& ); // Disable assignment operator

      protected:
        TV* _implementor;
        RemoteControl() :
          _implementor( 0 )
        {}
        virtual void setChannel( unsigned int channel )
        {
          assert( _implementor );
          _implementor->tuneChannel( channel );
        }

      public:
        virtual ~RemoteControl()
        {
          delete _implementor;
        }
        virtual void on()
        {
          assert( _implementor );
          _implementor->on();
        }
        virtual void off()
        {
          assert( _implementor );
          _implementor->off();
        }

      };

    } // namespace Remotes
  } // namespace Bridge
} // namespace HeadFirstDesignPatterns

#endif
