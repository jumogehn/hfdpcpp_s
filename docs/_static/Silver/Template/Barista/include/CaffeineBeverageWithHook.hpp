//===--- CaffeineBeverageWithHook.hpp - -------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_


namespace HFDP {
  namespace Template {
    namespace Barista {

      class CaffeineBeverageWithHook {
      protected:
        virtual void boilWater() const;
        virtual void pourInCup() const;
        virtual bool customerWantsCondiments();
      public:
        virtual ~CaffeineBeverageWithHook();
        virtual void prepareRecipe();
        virtual void brew() const = 0;
        virtual void addCondiments() const = 0;
      };

    } // namespace Barista
  } // namespace Template
} // namespace HFDP

#endif
