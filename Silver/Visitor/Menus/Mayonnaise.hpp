#ifndef	_HFDP_CPP_VISITOR_MAYONNASIE_HPP_
#define _HFDP_CPP_VISITOR_MAYONNASIE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Mayonnaise : public Ingredient {

      public:
        explicit Mayonnaise( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 916.0f;
        };
        float getCarbs() const
        {
          return 56.0f;
        };
        float getProtien() const
        {
          return 2.0f;
        }
        float getFat() const
        {
          return 78.0f;
        }
        float getCholesterol() const
        {
          return 0.61f;
        }
        float getSodium() const
        {
          return 1.671f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Mayonnaise(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
