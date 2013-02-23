#ifndef	_HFDP_CPP_VISTOR_MENUS_MENU_HPP_
#define _HFDP_CPP_VISTOR_MENUS_MENU_HPP_

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
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
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
          _menuComponents.push_back( menuComponent );
        }
        bool isVegetarian() const
        {
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
