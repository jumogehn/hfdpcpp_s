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


#ifndef	_HFDP_CPP_STRATEGY_MALLARD_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_MALLARD_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Strategy {

    class MallardDuck : public Duck {

    public:
      MallardDuck();
      void display() const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
