//===--- Whip.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_WHIP_HPP_
#define _HFDP_CPP_DECORATOR_WHIP_HPP_

#include "Beverage.hpp"
#include "CondimentDecorator.hpp"
#include <string>

namespace HFDP {
  namespace Decorator {

    class Whip : public CondimentDecorator {

      const Beverage* _beverage;

    public:
      explicit Whip( const Beverage* beverage );
      ~Whip();
      std::string getDescription() const;
      double cost() const;
    };

  } // namespace Observer
} // namespace HFDP

#endif
