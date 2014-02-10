//===--- FlyNoWay.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_NO_WAY_WINGS_HPP_

#include "FlyBehavior.hpp"

namespace HFDP {
  namespace Strategy {

    class FlyNoWay : public FlyBehavior {

    public:
      void fly () const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
