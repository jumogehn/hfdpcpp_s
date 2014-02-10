//===--- ModelDuck.hpp - ----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_MODEL_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Strategy {

    class ModelDuck : public Duck {

    public:
      ModelDuck();
      void display() const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
