//===--- RCAControl.hpp - ---------------------------------------*- C++ -*-===//
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



#ifndef	_HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_
#define _HFDP_CPP_BRIDGE_RCA_CONTROL_HPP_

#include "RemoteControl.hpp"
#include <string>


namespace HFDP {
  namespace Bridge {
    namespace Remotes {

      class RCAControl : public RemoteControl {

        unsigned int _currentStation;

      public:
        explicit RCAControl( const std::string& location );
        void setStation( unsigned int channel );
        void nextChannel();
        void previousChannel();
      };

    } // namespace Remotes
  } // namespace Bridge
} // namespace HFDP

#endif
