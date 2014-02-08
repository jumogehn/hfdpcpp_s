//===--- Soy.hpp - ----------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_SOY_HPP_
#define _HFDP_CPP_DECORATOR_SOY_HPP_

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

namespace HFDP {
  namespace Decorator {

    class Soy : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Soy( const Beverage* beverage );
      ~Soy();
      std::string getDescription() const;
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
