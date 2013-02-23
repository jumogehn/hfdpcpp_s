#ifndef	_HFDP_CPP_VISITOR_BAGEL_HPP_
#define _HFDP_CPP_VISITOR_BAGEL_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Bagel : public Ingredient {

      public:
        explicit Bagel( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 216.0f;
        };
        float getCarbs() const
        {
          return 0.0f;
        };
        float getProtien() const
        {
          return 0.0f;
        }
        float getFat() const
        {
          return 1.4f;
        }
        float getCholesterol() const
        {
          return 0.0f;
        }
        float getSodium() const
        {
          return 0.0f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Bagel(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
