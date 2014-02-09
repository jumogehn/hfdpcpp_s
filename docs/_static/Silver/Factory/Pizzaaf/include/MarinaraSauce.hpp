//===--- MarinaraSauce.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_MARINARA_SAUCE_HPP_

#include "Sauce.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class MarinaraSauce : public Sauce {

      public:
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
