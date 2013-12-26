#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_

//#include "Hum_Log_Manager.h"
//#include "Hum_Trace.h"

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

          std::vector< MenuComponent* >::iterator
            iterator = _menuComponents.begin();
          while( iterator != _menuComponents.end() ) {
            MenuComponent* menuComponent = *iterator++;
            menuComponent->print();
          }
        }
      };

    } // namespace Menus
  } // namespace Composite
} // namespace HeadFirstDesignPatterns

#endif
