#ifndef	_HFDP_CPP_VISITOR_CHICKEN_HPP_
#define _HFDP_CPP_VISITOR_CHICKEN_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Chicken : public Ingredient {

      public:
        explicit  Chicken( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Chicken::Chicken"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Chicken::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getCalories"));
          return 188.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getProtien"));
          return 8.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getFat"));
          return 17.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getCholesterol"));
          return 0.47f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::getSodium"));
          return 0.38f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Chicken::toString"));
          std::stringstream result;
          result << "Chicken(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
