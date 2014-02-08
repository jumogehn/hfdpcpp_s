//===--- Decaf.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_DECAF_HPP_
#define _HFDP_CPP_DECORATOR_DECAF_HPP_

#include "Beverage.hpp"

namespace HFDP {
  namespace Decorator {

    class Decaf : public Beverage {

    public:
      Decaf();
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
