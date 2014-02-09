//===--- MozzarellaCheese.hpp - ---------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MOZZARELLA_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MOZZARELLA_CHEESE_HPP_

#include "Cheese.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class MozzarellaCheese : public Cheese {

      public:
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
