#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class PancakeHouseMenuIterator : public Iterator<MenuItem > {

        mutable std::vector< MenuItem* > _items;
        mutable std::vector< MenuItem* >::iterator _iterator;

        PancakeHouseMenuIterator( const PancakeHouseMenuIterator& );
        void operator=( const PancakeHouseMenuIterator& );

      public:
        explicit PancakeHouseMenuIterator( std::vector< MenuItem* > items ) :
          _items( items )
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::"
                             "PancakeHouseMenuIterator"));
          _iterator = _items.begin();
        }
        MenuItem* next() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::next"));
          MenuItem* result = *_iterator++;
          return result;
        }
        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("PancakeHouseMenuIterator::hasNext"));

          if( _iterator != _items.end() ) {
            return true;
          }

          return false;
        }
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
