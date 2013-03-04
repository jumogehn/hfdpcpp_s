#ifndef	_HFDP_CPP_VISITOR_RICE_HPP_
#define _HFDP_CPP_VISITOR_RICE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Rice : public Ingredient {

      public:
        explicit Rice( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Rice::Rice"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Rice::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getCalories"));
          return 194.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getCarbs"));
          return 41.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getFat"));
          return 1.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Rice::getSodium"));
          return 0.3f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Rice::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Rice::toString"));
          std::stringstream result;
          result << "Rice(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
