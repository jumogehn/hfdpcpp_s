#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent() {
        }
        virtual ~MenuComponent()
        {}
        virtual void add( MenuComponent* menuComponent )
        {
          throw new UnsupportedOperationException();
        }
        virtual void remove( MenuComponent* menuComponent )
        {
          throw new UnsupportedOperationException();
        }
        virtual const MenuComponent* getChild( int i ) const
        {
          throw new UnsupportedOperationException();
        }
        virtual std::string getName() const
        {
          throw new UnsupportedOperationException();
        }
        virtual std::string getDescription() const
        {
          throw new UnsupportedOperationException();
        }
        virtual double getPrice() const
        {
          throw new UnsupportedOperationException();
        }
        virtual bool isVegetarian() const
        {
          throw new UnsupportedOperationException();
        }
        virtual void print() const
        {
          throw new UnsupportedOperationException();
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
