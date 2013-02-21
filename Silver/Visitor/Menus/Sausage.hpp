#ifndef	_HFDP_CPP_VISITOR_SAUSAGE_HPP_
#define _HFDP_CPP_VISITOR_SAUSAGE_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Sausage : public Ingredient {

      public:
        explicit Sausage( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 94.0f;
        }
        float getCarbs() const
        {
          return 0.0f;
        }
        float getProtien() const
        {
          return 5.0f;
        }
        float getFat() const
        {
          return 8.0f;
        }
        float getCholesterol() const
        {
          return 0.23f;
        }
        float getSodium() const
        {
          return 0.184f;
        }
        bool isVegetarian() const
        {
          return false;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Sausage(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
