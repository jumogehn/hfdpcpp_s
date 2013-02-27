#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITEM_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_MENU_ITEM_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class MenuItem /*: public Object<MenuItem> */ {

        std::string _name;
        std::string _description;
        bool _vegetarian;
        double _price;

        MenuItem( const MenuItem& ); // Disable copy constructor
        void operator=( const MenuItem& ); // Disable assignment operator

      public:
        MenuItem( std::string name, std::string description, bool vegetarian,
                  double price ) :
          _name( name ), _description( description ), _vegetarian( vegetarian ),
          _price( price )
        {
          HUM_TRACE(ACE_TEXT("MenuItem::MenuItem"));
        }
        std::string getName()
        {
          HUM_TRACE(ACE_TEXT("MenuItem::getName"));
          return _name;
        }
        std::string getDescription()
        {
          HUM_TRACE(ACE_TEXT("MenuItem::getDescription"));
          return _description;
        }
        double getPrice()
        {
          HUM_TRACE(ACE_TEXT("MenuItem::getPrice"));
          return _price;
        }
        bool isVegetarian()
        {
          HUM_TRACE(ACE_TEXT("MenuItem::isVegetarian"));
          return _vegetarian;
        }
        std::string toString()
        {
          HUM_TRACE(ACE_TEXT("MenuItem::toString"));
          std::stringstream value ( _name.c_str() );
          value << " $" << _price << std::endl << _description.c_str();
          return value.str();
        }
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
