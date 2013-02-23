#ifndef	_HFDP_CPP_VISITOR_FISH_HPP_
#define _HFDP_CPP_VISITOR_FISH_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Fish : public Ingredient {

      public:
        explicit Fish( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 189.0f;
        };
        float getCarbs() const
        {
          return 0.0f;
        };
        float getProtien() const
        {
          return 41.0f;
        }
        float getFat() const
        {
          return 2.0f;
        }
        float getCholesterol() const
        {
          return 0.99f;
        }
        float getSodium() const
        {
          return 0.125f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Fish(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
