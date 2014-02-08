//===--- Beverage.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_DECORATOR_BEVERAGE_HPP_
#define _HFDP_CPP_DECORATOR_BEVERAGE_HPP_

#include <string>

namespace HFDP {
  namespace Decorator {

    class Beverage {

    protected:
      std::string _description;

      Beverage();
    public:
      virtual ~Beverage();
      virtual std::string getDescription() const;
      virtual double cost() const = 0;
    };

  } // namespace Observer
} // namespace HFDP

#endif
