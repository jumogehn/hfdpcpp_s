#ifndef	_HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Iterator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class MenuIterator : public Iterator<MenuComponent > {

        mutable std::vector< MenuComponent* > _items;
        mutable std::vector< MenuComponent* >::iterator _iterator;

        MenuIterator( const MenuIterator& );
        void operator=( const MenuIterator& );

      public:
        explicit MenuIterator( std::vector< MenuComponent* > items ) :
          _items( items )
        {
          HUM_TRACE(ACE_TEXT("MenuIterator::"
                             "MenuIterator"));
          _iterator = _items.begin();
        }
        MenuComponent* next() const
        {
          HUM_TRACE(ACE_TEXT("MenuIterator::next"));
          MenuComponent* result = *_iterator++;
          return result;
        }
        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("MenuIterator::hasNext"));

          if( _iterator != _items.end() ) {
            return true;
          }
          return false;
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
