//===--- IngredientDecorator.hpp - ------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_

#include "Ingredient.hpp"
#include <string>
#include <memory>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class IngredientDecorator : public Ingredient{

        IngredientDecorator( const IngredientDecorator& );
        void operator=( const IngredientDecorator& );

      protected:
        std::unique_ptr< Ingredient > _ingredient;
        explicit IngredientDecorator( Ingredient* ingredient );
      public:
        virtual ~IngredientDecorator();
      };
    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
