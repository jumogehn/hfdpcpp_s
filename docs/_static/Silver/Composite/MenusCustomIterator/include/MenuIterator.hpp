//===--- MenuIterator.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_

#include "Iterator.hpp"
#include "MenuComponent.hpp"
#include <vector>

namespace HFDP {
  namespace Composite {
    namespace Menus {

      class MenuIterator : public Iterator<MenuComponent > {

        mutable std::vector< MenuComponent* > _items;
        mutable std::vector< MenuComponent* >::iterator _iterator;

        MenuIterator( const MenuIterator& );
        void operator=( const MenuIterator& );

      public:
        explicit MenuIterator( std::vector< MenuComponent* > items );
        MenuComponent* next() const;
        bool hasNext() const;
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HFDP

#endif
