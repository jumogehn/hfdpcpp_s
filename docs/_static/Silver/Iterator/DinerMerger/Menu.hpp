#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class Menu {

      public:
        virtual ~Menu()
        {
            HUM_TRACE(ACE_TEXT("Menu::~Menu"));
        }
        virtual Iterator<MenuItem>* createIterator() const = 0;
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
