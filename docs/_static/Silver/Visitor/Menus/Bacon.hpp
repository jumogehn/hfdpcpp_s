#ifndef	_HFDP_CPP_VISITOR_BACON_HPP_
#define _HFDP_CPP_VISITOR_BACON_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Bacon : public Ingredient {

      public:
        explicit Bacon(	float amount = 1.0f ) : Ingredient( amount )
        {}
        void accept( Visitor* visitor)
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 254.0f;
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
          return 0.28f;
        }
        float getCholesterol() const
        {
          return 0.27f;
        }
        float getSodium() const
        {
          return 0.08f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Bacon(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
