//===--- Ingredient.hpp - ---------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_HPP_

#include "Visitor.hpp"
#include "MenuComponent.hpp"
#include <string>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class MenuComponent;
      class Visitor;

      class Ingredient : public MenuComponent {

      protected:
        float _amount;

        Ingredient( float amount = 1.0f );
      public:
        virtual ~Ingredient();
        virtual void add( MenuComponent* menuComponent );
        virtual void accept( Visitor* visitor ) = 0;
        virtual bool isVegetarian() const = 0;
        virtual float getCalories() const = 0;
        virtual float getCarbs() const = 0;
        virtual float getCholesterol() const = 0;
        virtual float getFat() const = 0;
        virtual float getProtien() const = 0;
        virtual float getSodium() const = 0;
        virtual float getHealthRating() const;
        virtual std::string toString() const = 0;
      };

    } // namespace Menus
  } // namespace Vistor
} // namespace HFDP

#endif
