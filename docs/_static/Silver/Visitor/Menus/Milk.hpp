#ifndef	_HFDP_CPP_VISITOR_MILK_HPP_
#define _HFDP_CPP_VISITOR_MILK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Milk : public Ingredient {

      public:
        explicit Milk( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Milk::Milk"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Milk::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getCalories"));
          return 146.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getCarbs"));
          return 11.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getProtien"));
          return 8.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getFat"));
          return 8.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Milk::getSodium"));
          return 0.98f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Milk::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Milk::toString"));
          std::stringstream result;
          result << "Milk(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
