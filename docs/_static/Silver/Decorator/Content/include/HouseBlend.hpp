//===--- HouseBlend.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_HOUSE_BLEND_HPP_
#define _HFDP_CPP_DECORATOR_HOUSE_BLEND_HPP_

#include "Beverage.hpp"

namespace HFDP {
  namespace Decorator {

    class HouseBlend : public Beverage {

    public:
      HouseBlend();
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
