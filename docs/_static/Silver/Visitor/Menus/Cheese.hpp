#ifndef	_HFDP_CPP_VISITOR_CHEESE_HPP_
#define _HFDP_CPP_VISITOR_CHEESE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Cheese : public Ingredient {

      public:
        explicit Cheese( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 751.0f;
        };
        float getCarbs() const
        {
          return 19.0f;
        };
        float getProtien() const
        {
          return 0.0f;
        }
        float getFat() const
        {
          return 56.0f;
        }
        float getCholesterol() const
        {
          return 0.145f;
        }
        float getSodium() const
        {
          return 2.193f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Cheese(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
