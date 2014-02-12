//===--- Menu.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISTOR_MENUS_MENU_HPP_
#define _HFDP_CPP_VISTOR_MENUS_MENU_HPP_

#include "Visitor.hpp"
#include "MenuComponent.hpp"
#include <string>
#include <vector>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Menu : public MenuComponent {

        std::string _name;
        std::string _description;
        mutable std::vector< MenuComponent* > _menuComponents;

      public:
        explicit Menu( const std::string name, const std::string description );
        void accept( Visitor* visitor );
        float getHealthRating() const;
        void add( MenuComponent* menuComponent );
        bool isVegetarian() const;
        std::string toString() const;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
