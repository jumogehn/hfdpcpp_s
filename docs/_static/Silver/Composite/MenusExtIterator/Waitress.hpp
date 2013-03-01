#ifndef	_HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_WAITRESS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Composite	 {
    namespace Menus {

      class Waitress {

        const MenuComponent* _allMenus;

        Waitress( const Waitress& ); // Disable copy constructor
        void operator=( const Waitress& ); // Disable assignment operator

      public:
        explicit Waitress( const MenuComponent* allMenus ) :
          _allMenus( allMenus )
        {
          assert( allMenus );
          HUM_TRACE(ACE_TEXT("Waitress::Waitress"));
        }
        void printMenu() const
        {
          HUM_TRACE(ACE_TEXT("Waitress::printMenu"));
          _allMenus->print();
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif

