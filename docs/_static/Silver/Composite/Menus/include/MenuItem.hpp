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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_

#include "MenuComponent.hpp"
#include <string>

namespace HFDP {
  namespace Composite {
    namespace Menus {

      class MenuItem : public MenuComponent {

        std::string _name;
        std::string _description;
        bool _vegetarian;
        double _price;

      public:
        MenuItem( const std::string name, const std::string description,
                  bool vegetarian, double price );
        std::string getName() const;
        std::string getDescription() const;
        double getPrice() const;
        bool isVegetarian() const;
        void print() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
