#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class PancakeHouseMenuIterator : public Iterator<MenuItem > {

        mutable std::vector< MenuItem* > _items;
        mutable MenuItem* _position;

        PancakeHouseMenuIterator( const PancakeHouseMenuIterator& );
        void operator=( const PancakeHouseMenuIterator& );

      public:
        explicit PancakeHouseMenuIterator( std::vector< MenuItem* > items ) :
          _items( items )
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::"
                             "PancakeHouseMenuIterator"));
          _position = *items.begin();
        }
        MenuItem* next() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::next"));
          return _position;
        }
        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::hasNext"));
          for( std::vector< MenuItem* >::iterator iterator
               = _items.begin(); iterator != _items.end(); iterator++ ) {
            if( *iterator == _position ) {
              if( ++iterator != _items.end() ) {
                _position = *iterator;
                return true;
              }
              else
                return false;
            }
          }
          return false;
        }
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
