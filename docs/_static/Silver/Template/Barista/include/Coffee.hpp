//===--- Coffee.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_HPP_

#include "CaffeineBeverage.hpp"

namespace HFDP {
  namespace Template {
    namespace Barista {

      class Coffee : public CaffeineBeverage {

      public:
        void brew() const;
        void addCondiments() const;
      };

    } // namespace Barista
  } // namespace Template
} // namespace HFDP

#endif
