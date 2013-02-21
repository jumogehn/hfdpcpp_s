#ifndef	_HFDP_CPP_VISITOR_POTATO_HPP_
#define _HFDP_CPP_VISITOR_POTATO_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Potato : public Ingredient {

      public:
        explicit Potato( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 57.0f;
        };
        float getCarbs() const
        {
          return 13.0f;
        };
        float getProtien() const
        {
          return 1.0f;
        }
        float getFat() const
        {
          return 0.0f;
        }
        float getCholesterol() const
        {
          return 0.0f;
        }
        float getSodium() const
        {
          return 0.147f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Potatp(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
