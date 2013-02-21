#ifndef	_HFDP_CPP_VISITOR_BERRIES_HPP_
#define _HFDP_CPP_VISITOR_BERRIES_HPP_

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class BlueBerries : public Ingredient {

      public:
        explicit BlueBerries( float amount = 1.0f ) :
          Ingredient( amount )
        {}
        void accept( Visitor* visitor )
        {
          assert( visitor );
          return visitor->visit( this );
        }
        float getCalories() const
        {
          return 83.0f;
        };
        float getCarbs() const
        {
          return 21.0f;
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
          return 0.1f;
        }
        bool isVegetarian() const
        {
          return true;
        }
        std::string toString() const
        {
          std::stringstream result;
          result << "Blue berries(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
