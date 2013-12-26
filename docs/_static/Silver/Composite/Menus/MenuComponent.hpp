#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_

//#include "Hum_Log_Manager.h"
//#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class MenuComponent {

        MenuComponent( const MenuComponent& ); // Disable copy constructor
        void operator=( const MenuComponent& ); // Disable assignment operator

      public:
        MenuComponent()
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::"));
        }
        virtual ~MenuComponent()
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::~MenuComponent"));
        }
        virtual void add( MenuComponent* menuComponent )
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::add"));
          throw new UnsupportedOperationException();
        }
        virtual void remove( MenuComponent* menuComponent )
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::remove"));
          throw new UnsupportedOperationException();
        }
        virtual const MenuComponent* getChild( int i ) const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::getChild"));
          throw new UnsupportedOperationException();
        }
        virtual std::string getName() const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::getName"));
          throw new UnsupportedOperationException();
        }
        virtual std::string getDescription() const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::getDescription"));
          throw new UnsupportedOperationException();
        }
        virtual double getPrice() const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::getPrice"));
          throw new UnsupportedOperationException();
        }
        virtual bool isVegetarian() const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::isVegetarian"));
          throw new UnsupportedOperationException();
        }
        virtual void print() const
        {
          //HUM_TRACE(ACE_TEXT("MenuComponent::print"));
          throw new UnsupportedOperationException();
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
