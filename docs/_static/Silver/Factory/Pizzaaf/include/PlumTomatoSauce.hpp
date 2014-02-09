//===--- PlumTomatoSauce.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_

#include "Sauce.hpp"
#include <string>

namespace HFDP {
  namespace Factory {
    namespace Abstract {

      class PlumTomatoSauce : public Sauce {

      public:
        std::string toString() const;
      };

    } // namespace Abstract
  } // namespace Factory
} // namespace HFDP

#endif
