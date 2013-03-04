#ifndef	_HFDP_CPP_VISITOR_EGG_HPP_
#define _HFDP_CPP_VISITOR_EGG_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Egg : public Ingredient {

      public:
        explicit Egg( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Egg::Egg"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Egg::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getCalories"));
          return 54.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getCarbs"));
          return 0.3f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getProtien"));
          return 4.7f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getFat"));
          return 3.7f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getCholesterol"));
          return 0.156f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Egg::getSodium"));
          return 0.052f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Egg::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Egg::toString"));
          std::stringstream result;
          result << "Egg(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
