#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_PANCAKE_HOUSE_ITERATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class CompositeIterator : public Iterator<MenuComponent> {

        std::stack<Iterator<MenuComponent>* > _iterators;

        CompositeIterator( const CompositeIterator& );
        void operator=( const CompositeIterator& );

      public:
        CompositeIterator(Iterator<MenuComponent>* iterator)
        {
          HUM_TRACE(ACE_TEXT("CompositeIterator::"
                             "CompositeIterator"));
          if (iterator) {
            _iterators.push_back(iterator);
          }
        }

        MenuComponent* next() const
        {
          HUM_TRACE(ACE_TEXT("CompositeIterator::next"));

          if (hasNext()) {
            Iterator<MenuComponent> *iterator = _iterators.top();
            MenuComponent *component = (MenuComponent *) 

          }
        }

        bool hasNext() const
        {
          HUM_TRACE(ACE_TEXT("CompositeIterator::hasNext"));
        }
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
