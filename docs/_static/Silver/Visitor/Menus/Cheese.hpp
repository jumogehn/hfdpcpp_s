#ifndef	_HFDP_CPP_VISITOR_CHEESE_HPP_
#define _HFDP_CPP_VISITOR_CHEESE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Cheese : public Ingredient {

      public:
        explicit Cheese( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Cheese::Cheese"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Cheese::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getCalories"));
          return 751.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getCarbs"));
          return 19.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getFat"));
          return 56.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getCholesterol"));
          return 0.145f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::getSodium"));
          return 2.193f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Cheese::toString"));
          std::stringstream result;
          result << "Cheese(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
