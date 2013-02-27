#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class DinerMenuIterator : public Iterator< MenuItem > {

        MenuItem** _items;
        mutable int _position;
        // Disable copy constructor
        DinerMenuIterator( const DinerMenuIterator& );
        // Disable assignment operator
        void operator=( const DinerMenuIterator& );

      public:
        explicit DinerMenuIterator( MenuItem** items ) :
          _items( items ), _position( 0 )
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
          bool value = true;
          if( _items[_position] == 0 ) {
            value = false;
          }
          return value;
        }
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
