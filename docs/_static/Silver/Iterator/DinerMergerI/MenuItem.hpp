#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITEM_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_I_MENU_ITEM_HPP_

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMergerI {

      class MenuItem {

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
        {}
        std::string getName()
        {
          return _name;
        }
        std::string getDescription()
        {
          return _description;
        }
        double getPrice()
        {
          return _price;
        }
        bool isVegetarian()
        {
          return _vegetarian;
        }
        std::string toString()
        {
          std::stringstream value ( _name.c_str() );
          value << " $" << _price << std::endl << _description.c_str();
          return value.str();
        }
      };

    } // namespace DinerMergerI
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif
