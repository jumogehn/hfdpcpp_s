//===--- TV.hpp - -----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_BRIDGE_TV_HPP_
#define _HFDP_CPP_BRIDGE_TV_HPP_

namespace HFDP {
  namespace Bridge {
    namespace Remotes {

      class TV {
      protected:
        TV() {};
      public:
        virtual ~TV() {};
        virtual void on() = 0;
        virtual void off() = 0;
        virtual void tuneChannel( unsigned int channel ) = 0;
      };

    } // namespace Remotes
  } // namespace Bridge
} // namespace HFDP

#endif
