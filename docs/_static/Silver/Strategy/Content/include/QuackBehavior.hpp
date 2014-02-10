//===--- QuackBehavior.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HFDP_CPP_STRATEGY_QUACK_BEHAVIOR_HPP_


namespace HFDP {
  namespace Strategy {

    class QuackBehavior {

    public:
      virtual ~QuackBehavior();
      virtual void quack() const = 0;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
