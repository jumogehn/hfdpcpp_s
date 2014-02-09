//===--- ThickCrustDough.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_THICK_CRUST_DOUGH_HPP_

#include "Dough.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class ThickCrustDough : public Dough {

      public:
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
