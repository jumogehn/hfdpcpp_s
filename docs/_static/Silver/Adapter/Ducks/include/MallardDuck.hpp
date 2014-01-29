//===--- MallardDuck.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_
#define _HFDP_CPP_ADAPTER_MALLARD_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Adapter {
    namespace Ducks {

      class MallardDuck : public Duck {

      public:
        void fly() const;
        void quack() const;
      };

    } // namespace Ducks
  } // namespace Adapter
} // namespace HFDP

#endif
