#ifndef	_HFDP_CPP_VISITOR_HOTDOG_HPP_
#define _HFDP_CPP_VISITOR_HOTDOG_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Hotdog : public Ingredient {

      public:
        explicit Hotdog( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 242.0f;
        };
        float getCarbs() const
        {
          return 18.0f;
        };
        float getProtien() const
        {
          return 10.0f;
        }
        float getFat() const
        {
          return 15.0f;
        }
        float getCholesterol() const
        {
          return 0.44f;
        }
        float getSodium() const
        {
          return 0.670f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Hotdog(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
