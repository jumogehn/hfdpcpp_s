#ifndef	_HFDP_CPP_VISITOR_PANCAKE_HPP_
#define _HFDP_CPP_VISITOR_PANCAKE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Pancake : public Ingredient {

      public:
        explicit Pancake( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 86.0f;
        }
        float getCarbs() const
        {
          return 11.0f;
        }
        float getProtien() const
        {
          return 2.0f;
        }
        float getFat() const
        {
          return 4.0f;
        }
        float getCholesterol() const
        {
          return 0.22f;
        }
        float getSodium() const
        {
          return 0.167f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Pancake(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
