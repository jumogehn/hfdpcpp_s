//===--- RedHeadDuck.hpp - --------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_REDHEAD_DUCK_HPP_

#include "Duck.hpp"

namespace HFDP {
  namespace Strategy {

    class RedHead : public Duck {

    public:
      RedHead();
      void display() const;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
