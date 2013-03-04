#ifndef	_HFDP_CPP_VISITOR_BEEF_HPP_
#define _HFDP_CPP_VISITOR_BEEF_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Beef : public Ingredient {

      public:
        explicit Beef( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Beef::Beef"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Beef::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getCalories"));
          return 1320.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getProtien"));
          return 79.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getFat"));
          return 109.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getCholesterol"));
          return 0.336f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Beef::getSodium"));
          return 0.286f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Beef::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Beef::toString"));
          std::stringstream result;
          result << "Beef(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
