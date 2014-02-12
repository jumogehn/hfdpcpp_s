//===--- MenuItem.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_VISITOR_MENUS_MENU_ITEM_HPP_

#include "Ingredient.hpp"
#include "Visitor.hpp"
#include "MenuComponent.hpp"
#include <string>
#include <vector>
#include <list>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Ingredient;

      class MenuItem : public MenuComponent {

        std::string _name;
        std::string _description;
        double _price;

      protected:
        mutable std::list< Ingredient* > _ingredients;

      public:
        MenuItem( const std::string name, const std::string description,
                  double price );
        void accept( Visitor* visitor );
        void add( Ingredient* ingredient );
        double getPrice() const;
        float getHealthRating() const;

        bool isVegetarian() const;
        std::string toString() const;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
