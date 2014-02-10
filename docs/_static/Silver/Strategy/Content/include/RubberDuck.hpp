//===--- RubberDuck.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_RUBBER_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_RUBBER_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Strategy {

    class RubberDuck : public Duck {

    public:
      RubberDuck();
      void display() const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
