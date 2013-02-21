#ifndef	_HFDP_CPP_VISITOR_CHICKEN_HPP_
#define _HFDP_CPP_VISITOR_CHICKEN_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Chicken : public Ingredient {

      public:
        explicit  Chicken( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 188.0f;
        };
        float getCarbs() const
        {
          return 0.0f;
        };
        float getProtien() const
        {
          return 8.0f;
        }
        float getFat() const
        {
          return 17.0f;
        }
        float getCholesterol() const
        {
          return 0.47f;
        }
        float getSodium() const
        {
          return 0.38f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Chicken(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
