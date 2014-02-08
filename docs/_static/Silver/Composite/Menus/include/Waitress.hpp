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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_

#include "MenuComponent.hpp"

namespace HFDP {
  namespace Composite	 {
    namespace Menus {

      class Waitress {

        const MenuComponent* _allMenus;

        Waitress( const Waitress& ); // Disable copy constructor
        void operator=( const Waitress& ); // Disable assignment operator

      public:
        explicit Waitress( const MenuComponent* allMenus );
        void printMenu() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif

