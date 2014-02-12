//===--- MenuComponent.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_

#include "Visitor.hpp"
#include <string>

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Visitor;

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent();
        virtual ~MenuComponent();
        virtual void accept( Visitor* visitor ) = 0;
        virtual void add( MenuComponent* menuComponent );
        virtual float getHealthRating() const  = 0;
        virtual std::string toString() const = 0;
        virtual bool isVegetarian() const = 0;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif
