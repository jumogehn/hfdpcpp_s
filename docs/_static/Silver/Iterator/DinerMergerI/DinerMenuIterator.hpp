#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class DinerMenuIterator : public Iterator<MenuItem> {
        MenuItem** _items;
        mutable int _position;

        DinerMenuIterator( const DinerMenuIterator& );
        void operator=( const DinerMenuIterator& );

      public:
        explicit DinerMenuIterator(MenuItem** items) :
          _items(items), _position( 0 )
        {
          HUM_TRACE(ACE_TEXT("DinerMenuIterator::DinerMenuIterator"));
        }
        MenuItem* next() const
        {
          HUM_TRACE(ACE_TEXT("DinerMenuIterator::next"));
          MenuItem* menuItem = _items[_position];
          _position++;
          return menuItem;
        }
        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("DinerMenuIterator::hasNext"));
          if( _items[_position] == 0 ) {
            return false;
          } else {
            return true;
          }
        }
        void remove()
        {
          HUM_TRACE(ACE_TEXT("DinerMenuIterator::remove"));
        }
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
