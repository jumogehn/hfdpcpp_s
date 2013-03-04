#ifndef	_HFDP_CPP_VISITOR_TOMATO_HPP_
#define _HFDP_CPP_VISITOR_TOMATO_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Tomato : public Ingredient {

      public:
        explicit  Tomato( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Tomato::Tomato"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Tomato::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getCalories"));
          return 25.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getProtien"));
          return 2.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getFat"));
          return 0.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::getSodium"));
          return 0.66f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Tomato::toString"));
          std::stringstream result;
          result << "Tomato(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
