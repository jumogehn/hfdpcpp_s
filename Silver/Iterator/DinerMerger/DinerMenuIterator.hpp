#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITERATOR_HPP_

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
        {}
        MenuItem* next() const
        {
          MenuItem* menuItem = _items[_position];
          _position++;
          return menuItem;
        }
        bool hasNext() const
        {
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
