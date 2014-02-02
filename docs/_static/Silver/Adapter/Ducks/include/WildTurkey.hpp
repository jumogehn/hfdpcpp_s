//===--- WildTurkey.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_
#define _HFDP_CPP_ADAPTER_WILD_TURKEY_HPP_

#include "Turkey.hpp"

namespace HFDP {
  namespace Adapter {
    namespace Ducks {

      class WildTurkey : public Turkey {

      public:
        void fly() const;
        void gobble() const;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HFDP

#endif
