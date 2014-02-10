//===--- FlyBehavior.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_FLY_BEHAVIOR_HPP_


namespace HFDP {
  namespace Strategy {

    class FlyBehavior {

    public:
      virtual ~FlyBehavior();
      virtual void fly () const = 0;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
