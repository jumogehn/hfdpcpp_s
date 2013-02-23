#ifndef	_HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_
#define _HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class MixedVegetables : public Ingredient {

      public:
        explicit MixedVegetables( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 150.0f;
        }
        float getCarbs() const
        {
          return 30.0f;
        }
        float getProtien() const
        {
          return 7.0f;
        }
        float getFat() const
        {
          return 1.0f;
        }
        float getCholesterol() const
        {
          return 0.0f;
        }
        float getSodium() const
        {
          return 0.225f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Mixed vegetables(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
