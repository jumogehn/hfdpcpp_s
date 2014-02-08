//===--- DarkRoast.hpp - ----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_DARK_ROAST_HPP_
#define _HFDP_CPP_DECORATOR_DARK_ROAST_HPP_

#include "Beverage.hpp"

namespace HFDP {
  namespace Decorator {

    class DarkRoast : public Beverage {

    public:
      DarkRoast();
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
