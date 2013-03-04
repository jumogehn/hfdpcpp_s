#ifndef	_HFDP_CPP_VISITOR_OIL_HPP_
#define _HFDP_CPP_VISITOR_OIL_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Oil : public Ingredient {

      public:
        explicit Oil( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Oil::Oil"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Oil::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getCalories"));
          return 500.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getFat"));
          return 218.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Oil::getSodium"));
          return 0.0f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Oil::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Oil::toString"));
          std::stringstream result;
          result << "Oil(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
