//===--- Milk.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_MILK_HPP_
#define _HFDP_CPP_DECORATOR_MILK_HPP_

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

namespace HFDP {
  namespace Decorator {

    class Milk : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Milk( const Beverage* beverage );
      ~Milk();
      std::string getDescription() const;
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
