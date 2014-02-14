//===--- Waitress.hpp - -----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_

#include "Ingredient.hpp"
#include "Visitor.hpp"

namespace HFDP {
  namespace Visitor {
    namespace Menus {

      class Waitress : Visitor {

        MenuComponent* _allMenus;

        Waitress( const Waitress& ); // Disable copy constructor
        void operator=( const Waitress& ); // Disable assignment operator

      public:
        explicit Waitress( MenuComponent* allMenus );
        void printMenu();
        virtual void visit( Menu* component );
        virtual void visit( MenuItem* component );
        virtual void visit( Ingredient* component );
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HFDP

#endif

