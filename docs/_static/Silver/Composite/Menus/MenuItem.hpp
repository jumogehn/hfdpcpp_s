#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_

//#include "Hum_Log_Manager.h"
//#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class MenuItem : public MenuComponent {

        std::string _name;
        std::string _description;
        bool _vegetarian;
        double _price;

      public:
        MenuItem( const std::string name, const std::string description,
                  bool vegetarian, double price ) :
          _name( name ), _description( description ),
          _vegetarian( vegetarian ), _price( price )
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::MenuItem"));
        }
        std::string getName() const
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::getName"));
          return _name;
        }
        std::string getDescription() const
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::getDescription"));
          return _description;
        }
        double getPrice() const
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::getPrice"));
          return _price;
        }
        bool isVegetarian() const
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::isVegetarian"));
          return _vegetarian;
        }
        void print() const
        {
          //HUM_TRACE(ACE_TEXT("MenuItem::print"));
          std::cout << "  " << getName().c_str();
          if( isVegetarian() ) {
            std::cout << "(v)";
          }
          std::cout << ", " << getPrice() << std::endl;
          std::cout << "     -- " << getDescription().c_str() << std::endl;
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
