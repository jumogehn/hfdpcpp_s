//===--- Stock.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_STOCK_HPP_
#define _HFDP_CPP_VISITOR_STOCK_HPP_

#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "Stock.hpp"
#include <string>
#include <memory>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Stock : public Ingredient {

        std::unique_ptr< Ingredient > _ingredient;
        float _factor;	// self=1.0, sauce=1.5, gravy=2.0, broth=0.5

      public:
        explicit Stock( Ingredient* ingredient, float factor );
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
