#ifndef	_HFDP_CPP_VISITOR_HOTDOG_HPP_
#define _HFDP_CPP_VISITOR_HOTDOG_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Hotdog : public Ingredient {

      public:
        explicit Hotdog( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Hotdog::Hotdog"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Hotdog::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getCalories"));
          return 242.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getCarbs"));
          return 18.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getProtien"));
          return 10.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getFat"));
          return 15.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getCholesterol"));
          return 0.44f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::getSodium"));
          return 0.670f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Hotdog::toString"));
          std::stringstream result;
          result << "Hotdog(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
