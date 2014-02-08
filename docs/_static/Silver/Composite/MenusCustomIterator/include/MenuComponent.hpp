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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_

#include <string>

namespace HFDP {
  namespace Composite {
    namespace Menus {

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent();
        virtual ~MenuComponent();

        virtual void add( MenuComponent* menuComponent );
        virtual void remove( MenuComponent* menuComponent );
        virtual const MenuComponent* getChild( int i ) const;
        virtual std::string getName() const;
        virtual std::string getDescription() const;
        virtual double getPrice() const;
        virtual bool isVegetarian() const;
        virtual void print() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
