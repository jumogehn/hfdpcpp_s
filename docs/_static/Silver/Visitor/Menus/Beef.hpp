#ifndef	_HFDP_CPP_VISITOR_BEEF_HPP_
#define _HFDP_CPP_VISITOR_BEEF_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Beef : public Ingredient {

      public:
        explicit Beef( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 1320.0f;
        }
        float getCarbs() const
        {
          return 0.0f;
        }
        float getProtien() const
        {
          return 79.0f;
        }
        float getFat() const
        {
          return 109.0f;
        }
        float getCholesterol() const
        {
          return 0.336f;
        }
        float getSodium() const
        {
          return 0.286f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Beef(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
