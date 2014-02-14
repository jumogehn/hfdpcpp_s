//===--- Fried.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_FRIED_HPP_
#define _HFDP_CPP_VISITOR_FRIED_HPP_

#include "Ingredient.hpp"
#include "IngredientDecorator.hpp"
#include "Visitor.hpp"
#include <string>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Fried : public IngredientDecorator {

      private:
        std::auto_ptr< Ingredient > _fat;

      public:
        explicit Fried( Ingredient* ingredient, Ingredient* fat );
        void accept( Visitor* visitor );
        float getCalories() const;
        float getCarbs() const;
        float getProtien() const;
        float getFat() const;
        float getCholesterol() const;
        float getSodium() const;
        bool isVegetarian() const;
        std::string toString() const;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
