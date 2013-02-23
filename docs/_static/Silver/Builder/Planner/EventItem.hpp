#ifndef	_HFDP_CPP_BUILDER_EVENT_ITEM_HPP_
#define _HFDP_CPP_BUILDER_EVENT_ITEM_HPP_

namespace HeadFirstDesignPatterns {
  namespace Builder {

    class EventItem : public EventComponent {

      std::string _name;
      std::string _description;
      double _price;

    public:
      EventItem( const std::string name,
                 const std::string description, double price = 0.0 ) :
        _name( name ), _description( description ), _price( price )
      {}
      std::string getName() const
      {
        return _name;
      }
      std::string getDescription() const
      {
        return _description;
      }
      double getPrice() const
      {
        return _price;
      }
      void print() const
      {
        std::cout << "   " << getName().c_str();
        std::cout << " , " << getDescription().c_str();
        std::cout << "- $" << getPrice() << std::endl;
      }
    };

  } // namespace Builder
} // namespace HeadFirstDesignPatterns

#endif
