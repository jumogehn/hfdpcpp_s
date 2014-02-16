//===--- Sony.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_BRIDGE_SONY_HPP_
#define _HFDP_CPP_BRIDGE_SONY_HPP_

#include "TV.hpp"
#include <string>

namespace HFDP {
  namespace Bridge {
    namespace Remotes {

      class Sony : public TV {

        std::string _location;

      public:
        explicit Sony( const std::string& location );
        void on();
        void off();
        void tuneChannel( unsigned int channel );
      };
    } // namespace Remotes
  } // namespace Bridge
} // namespace HFDP

#endif
