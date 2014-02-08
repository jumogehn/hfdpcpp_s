//===--- Menus.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_

#include "MenuComponent.hpp"
#include <string>
#include <vector>

namespace HFDP {
  namespace Composite {
    namespace Menus {

      class Menu : public MenuComponent {

        std::string _name;
        std::string _description;
        mutable std::vector< MenuComponent* > _menuComponents;

      public:
        Menu( const std::string name, const std::string description );
        void add( MenuComponent* menuComponent );
        void remove( MenuComponent* menuComponent );
        MenuComponent* getChild( int i ) const;
        std::string getName() const;
        std::string getDescription() const;
        void print() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
