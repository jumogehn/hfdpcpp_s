#ifndef	_HFDP_CPP_VISTOR_MENUS_MENU_HPP_
#define _HFDP_CPP_VISTOR_MENUS_MENU_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Menu : public MenuComponent {

        std::string _name;
        std::string _description;
        mutable std::vector< MenuComponent* > _menuComponents;

      public:
        explicit Menu( const std::string name, const std::string description ) :
          _name( name ), _description( description )
        {
          HUM_TRACE(ACE_TEXT("Menu::Menu"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Menu::accept"));
          visitor->visit( this );
          std::vector< MenuComponent* >::const_iterator iterator
            = _menuComponents.begin();
          while( iterator != _menuComponents.end() ) {
            (*iterator)->accept( visitor );
            ++iterator;
          }
        }
        float getHealthRating() const
        {
          HUM_TRACE(ACE_TEXT("Menu::getHealthRating"));
          float result = 0.0f;
          std::vector< MenuComponent* >::const_iterator iterator
            = _menuComponents.begin();
          while( iterator != _menuComponents.end() ) {
            result += (*iterator)->getHealthRating();
            ++iterator;
          }
          return result;
        }
        void add( MenuComponent* menuComponent )
        {
          assert( menuComponent );
          HUM_TRACE(ACE_TEXT("Menu::add"));
          _menuComponents.push_back( menuComponent );
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Menu::isVegetarian"));
          bool result = true;
          std::vector< MenuComponent* >::const_iterator iterator
            = _menuComponents.begin();
          while( iterator != _menuComponents.end() && true == result ) {
            result = (*iterator)->isVegetarian();
            ++iterator;
          }
          return result;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Menu::toString"));
          std::string result( _name );
          result.append( "\t" );
          result.append( _description );
          return result;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
