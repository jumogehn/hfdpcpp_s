//===--- CondimentDecorator.hpp - -------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_CONDIMENT_HPP_
#define _HFDP_CPP_DECORATOR_CONDIMENT_HPP_

#include "Beverage.hpp"
#include <string>

namespace HFDP {
  namespace Decorator {

    class CondimentDecorator : public Beverage {

      CondimentDecorator( const CondimentDecorator& );
      void operator=( const CondimentDecorator& );

    protected:
      CondimentDecorator();
    public:
      virtual ~CondimentDecorator();
      virtual std::string getDescription() const = 0;
    };

  } // namespace Observer
} // namespace HFDP

#endif
