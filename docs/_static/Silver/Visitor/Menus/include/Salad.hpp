//===--- Salad.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_SALAD_HPP_
#define _HFDP_CPP_VISITOR_SALAD_HPP_

#include "IngredientDecorator.hpp"
#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Stock.hpp"
#include <string>
#include <memory>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Salad : public IngredientDecorator {

        std::unique_ptr< Stock > _base;
        std::string _description;

      public:
        explicit Salad( std::string description, Ingredient* ingredient,
                        Stock* base);
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
