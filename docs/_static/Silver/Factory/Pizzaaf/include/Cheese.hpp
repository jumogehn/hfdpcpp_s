//===--- Cheese.hpp - -------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_CHEESE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_CHEESE_HPP_

#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class Cheese {

      public:
        virtual ~Cheese();
        virtual std::string toString() const = 0;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
