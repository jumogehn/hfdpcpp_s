#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_DINER_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_DINER_MENU_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class DinerMenu : public Menu {

        static const int MAX_ITEMS = 6;
        int _numberOfItems;
        MenuItem** _menuItems;

        DinerMenu( const DinerMenu& ); // Disable copy constructor
        void operator=( const DinerMenu& ); // Disable assignment operator

      public:
        DinerMenu() :
          _numberOfItems( 0 )
        {
          HUM_TRACE(ACE_TEXT("DinerMenu::DinerMenu"));

          // added one additional entry;
          _menuItems = new MenuItem*[MAX_ITEMS + 1];
          // to hold a null ( 0 ) value
          for( int i = 0; i <= MAX_ITEMS; i++ ) {
            _menuItems[i] = 0;	// so hasNext() will work
          }
          addItem( "Vegetarian BLT","(Fakin') Bacon with lettuce"
                   " & tomato on whole wheat", true, 2.99 );
          addItem( "BLT","Bacon with lettuce & tomato on whole wheat", false,
                   2.99 );
          addItem( "Soup of the day","Soup of the day, with a side of"
                   " potato salad", false, 3.29 );
          addItem( "Hotdog","A hot dog, with saurkraut, relish, onions,"
                   " topped with cheese",false, 3.05 );
          addItem( "Steamed Veggies and Brown Rice",
                   "Steamed vegetables over brown rice", true, 3.99 );
          addItem( "Pasta","Spaghetti with Marinara Sauce, and a slice of"
                   " sourdough bread",true, 3.89 );
        }
        void addItem( std::string name, std::string description,
                      bool vegetarian, double price )
        {
          HUM_TRACE(ACE_TEXT("DinerMenu::addItem"));

          MenuItem* menuItem = new MenuItem( name, description, vegetarian,
                                             price );

          if( _numberOfItems >= MAX_ITEMS ) {
            std::cerr << "Sorry, menu is full!  Can't add item to menu"
              << std::endl;
          } else {
            _menuItems[_numberOfItems] = menuItem;
            _numberOfItems++;
          }
        }
        MenuItem** getMenuItems() const
        {
          HUM_TRACE(ACE_TEXT("DinerMenu::getMenuItems"));
          return _menuItems;
        }
        Iterator<MenuItem>* createIterator() const
        {
          HUM_TRACE(ACE_TEXT("DinerMenu::createIterator"));
          return dynamic_cast< Iterator< MenuItem >* >(
            new DinerMenuIterator( _menuItems ) );
        }
        // other menu methods here
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
