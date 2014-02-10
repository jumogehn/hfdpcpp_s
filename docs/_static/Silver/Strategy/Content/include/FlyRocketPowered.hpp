//===--- FlyRocketPowered.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_
#define _HFDP_CPP_STRATEGY_FLY_ROCKET_POWERED_HPP_

#include "FlyBehavior.hpp"

namespace HFDP {
  namespace Strategy {

    class FlyRocketPowered : public FlyBehavior {

    public:
      void fly () const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
