#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class PancakeHouseMenuIterator : public Iterator<MenuItem > {

        std::vector< MenuItem* > _items;
        mutable int _position;

        PancakeHouseMenuIterator( const PancakeHouseMenuIterator& );
        void operator=( const PancakeHouseMenuIterator& );

      public:
        PancakeHouseMenuIterator( std::vector< MenuItem* > items ) :
          _items( items ), _position( 0 )
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::"
                             "PancakeHouseMenuIterator"));
        }
        MenuItem* next() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::next"));
          MenuItem* menuItem = _items[_position];
          _position++;
          return menuItem;
        }
        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::hasNext"));
          if( _position >= static_cast< int >( _items.size() ) ) {
            return false;
          } else {
            return true;
          }
        }
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
