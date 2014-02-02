//===--- RemoteControl.hpp - ------------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//


#ifndef	_HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_REMOTE_CONTROL_HPP_

#include "TV.hpp"

namespace HFDP {
  namespace Bridge {
    namespace Remotes {

      class RemoteControl {

        RemoteControl( const RemoteControl& ); // Disable copy constructor
        void operator=( const RemoteControl& ); // Disable assignment operator

      protected:
        TV* _implementor;
        RemoteControl();
        virtual void setChannel( unsigned int channel );

      public:
        virtual ~RemoteControl();
        virtual void on();
        virtual void off();
      };

    } // namespace Remotes
  } // namespace Bridge
} // namespace HFDP

#endif
