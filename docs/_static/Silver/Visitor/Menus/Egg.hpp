#ifndef	_HFDP_CPP_VISITOR_EGG_HPP_
#define _HFDP_CPP_VISITOR_EGG_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Egg : public Ingredient {

      public:
        explicit Egg( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 54.0f;
        };
        float getCarbs() const
        {
          return 0.3f;
        };
        float getProtien() const
        {
          return 4.7f;
        }
        float getFat() const
        {
          return 3.7f;
        }
        float getCholesterol() const
        {
          return 0.156f;
        }
        float getSodium() const
        {
          return 0.052f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Egg(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
