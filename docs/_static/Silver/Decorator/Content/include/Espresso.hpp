//===--- Espresso.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_ESPRESSO_HPP_
#define _HFDP_CPP_DECORATOR_ESPRESSO_HPP_

#include "Beverage.hpp"

namespace HFDP {
  namespace Decorator {

    class Espresso : public Beverage {

    public:
      Espresso();
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
