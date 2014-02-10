//===--- DecoyDuck.hpp - ----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DECOY_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Strategy {

    class DecoyDuck : public Duck {

    public:
      DecoyDuck();
      void display() const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
