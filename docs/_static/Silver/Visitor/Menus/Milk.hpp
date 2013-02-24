#ifndef	_HFDP_CPP_VISITOR_MILK_HPP_
#define _HFDP_CPP_VISITOR_MILK_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Milk : public Ingredient {

      public:
        explicit Milk( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 146.0f;
        }
        float getCarbs() const
        {
          return 11.0f;
        }
        float getProtien() const
        {
          return 8.0f;
        }
        float getFat() const
        {
          return 8.0f;
        }
        float getCholesterol() const
        {
          return 0.0f;
        }
        float getSodium() const
        {
          return 0.98f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Milk(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif