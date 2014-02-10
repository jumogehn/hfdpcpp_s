//===--- FlyWithWings.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_
#define _HFDP_CPP_STRATEGY_FLY_WITH_WINGS_HPP_

#include "FlyBehavior.hpp"

namespace HFDP {
  namespace Strategy {

    class FlyWithWings : public FlyBehavior {

    public:
      void fly () const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
