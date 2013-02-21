#ifndef	_HFDP_CPP_VISITOR_SAUERKRAUT_HPP_
#define _HFDP_CPP_VISITOR_SAUERKRAUT_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Sauerkraut : public Ingredient {

      public:
        explicit Sauerkraut( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 31.0f;
        }
        float getCarbs() const
        {
          return 6.0f;
        }
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
          return 0.437f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "SauerKraut(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
