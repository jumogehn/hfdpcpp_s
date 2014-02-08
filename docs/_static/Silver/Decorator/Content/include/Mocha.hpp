//===--- Mocha.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_MOCHA_HPP_
#define _HFDP_CPP_DECORATOR_MOCHA_HPP_

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

namespace HFDP {
  namespace Decorator {

    class Mocha : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Mocha( Beverage* beverage );
      ~Mocha();
      std::string getDescription() const;
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
