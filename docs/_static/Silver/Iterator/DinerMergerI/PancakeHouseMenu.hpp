#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_MENU_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_PANCAKE_HOUSE_MENU_HPP_

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class PancakeHouseMenu : public Menu {
        std::vector< MenuItem* > _menuItems;

        PancakeHouseMenu( const PancakeHouseMenu& ); //Disable copy constructor
        void operator=( const PancakeHouseMenu& ); //Disable assignment operator

      public:
        PancakeHouseMenu()
        {
          addItem( "K&B's Pancake Breakfast",
                   "Pancakes with scrambled eggs,and toast",true,2.99);
          addItem( "Regular Pancake Breakfast",
                   "Pancakes with fried eggs, sausage",false,2.99);
          addItem( "Blueberry Pancakes",
                   "Pancakes made with fresh blueberries",true,3.49);
          addItem( "Waffles","Waffles, with your choice of blueberries or"
                   " strawberries",true,3.59);
        }
        void addItem( std::string name, std::string description,
                      bool vegetarian, double price )
        {
          MenuItem* menuItem
            = new MenuItem( name, description, vegetarian, price );
          _menuItems.push_back( menuItem );
        }
        std::vector< MenuItem* > getMenuItems() const
        {
          return _menuItems;
        }
        Iterator<MenuItem>* createIterator() const
        {
          return dynamic_cast<Iterator<MenuItem>* > (
            new PancakeHouseMenuIterator( _menuItems) );
        }
        // other menu methods here
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
