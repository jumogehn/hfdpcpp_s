#ifndef	_HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_VISITOR_MENUS_MENU_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent()
        {}
        virtual ~MenuComponent()
        {}
        virtual void accept( Visitor* visitor ) = 0;
        virtual void add( MenuComponent* menuComponent )
        {}
        virtual float getHealthRating() const  = 0;
        virtual std::string toString() const = 0;
        virtual bool isVegetarian() const = 0;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
