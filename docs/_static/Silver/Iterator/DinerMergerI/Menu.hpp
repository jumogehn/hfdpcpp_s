#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class Menu {
      public:
        virtual Iterator<MenuItem>* createIterator() const = 0;
        virtual ~Menu()
        {
          HUM_TRACE(ACE_TEXT("Menu::~Menu"));
        }
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
