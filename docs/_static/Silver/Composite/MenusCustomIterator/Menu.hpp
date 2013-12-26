#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_

//#include "Hum_Log_Manager.h"
//#include "Hum_Trace.h"

#include "Iterator.hpp"
#include "MenuIterator.hpp"

namespace HeadFirstDesignPatterns {
  namespace Composite {
    namespace Menus {

      class Menu : public MenuComponent {

        std::string _name;
        std::string _description;
        mutable std::vector< MenuComponent* > _menuComponents;

      public:
        Menu( const std::string name, const std::string description ) :
          _name( name ), _description( description )
        {
          //HUM_TRACE(ACE_TEXT("Menu::Menu"));
        }
        void add( MenuComponent* menuComponent )
        {
          assert( menuComponent );
          //HUM_TRACE(ACE_TEXT("Menu::add"));
          _menuComponents.push_back( menuComponent );
        }
        void remove( MenuComponent* menuComponent )
        {
          assert( menuComponent );
          //HUM_TRACE(ACE_TEXT("Menu::remove"));
          std::remove( _menuComponents.begin(), _menuComponents.end(),
                       menuComponent );
        }
        MenuComponent* getChild( int i ) const
        {
          //HUM_TRACE(ACE_TEXT("Menu::getChild"));
          return _menuComponents[i];
        }
        std::string getName() const
        {
          //HUM_TRACE(ACE_TEXT("Menu::getName"));
          return _name;
        }
        std::string getDescription() const
        {
          //HUM_TRACE(ACE_TEXT("Menu::getDescription"));
          return _description;
        }
        void print() const
        {
          //HUM_TRACE(ACE_TEXT("Menu::print"));
          std::cout << std::endl << getName().c_str();
          std::cout << ", " << getDescription().c_str() << std::endl;
          std::cout << "---------------------" << std::endl;

          //There might be a memory leak!! ^^;
          Iterator<MenuComponent>* menuIterator
            = createIterator();

          while( menuIterator->hasNext() ) {
            MenuComponent* menuComponent = dynamic_cast<MenuComponent * >
              ( menuIterator->next() );
            menuComponent->print();
          }
        }

        Iterator<MenuComponent>* createIterator() const
        {
          //HUM_TRACE(ACE_TEXT("PancakeHouseMenu::createIterator"));
          return dynamic_cast<Iterator<MenuComponent>* > (
            new MenuIterator(_menuComponents) );
        }

      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
