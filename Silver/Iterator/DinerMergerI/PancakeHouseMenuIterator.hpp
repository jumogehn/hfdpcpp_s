#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_ITERATOR_HPP_

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
          _position = *items.begin();
        }
        MenuItem* next() const
        {
          return _position;
        }
        bool hasNext() const
        {
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
