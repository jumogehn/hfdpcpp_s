//===--- CoffeeWithHook.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_COFFEE_WITH_HOOK_HPP_

#include "CaffeineBeverageWithHook.hpp"
#include <string>

namespace HFDP {
  namespace Template {
    namespace Barista {

      class CoffeeWithHook : public CaffeineBeverageWithHook {
      private:
        std::string getUserInput() const;

      public:
        void brew() const;
        void addCondiments() const;

        bool customerWantsCondiments();
      };

    } // namespace Barista
  } // namespace Template
} // namespace HFDP

#endif
