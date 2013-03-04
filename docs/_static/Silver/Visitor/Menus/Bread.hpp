#ifndef	_HFDP_CPP_VISITOR_BREAD_HPP_
#define _HFDP_CPP_VISITOR_BREAD_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Bread : public Ingredient {

      public:
        explicit Bread( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Bread::Bread"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Bread::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getCalories"));
          return 120.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getCarbs"));
          return 23.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getProtien"));
          return 3.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getFat"));
          return 1.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Bread::getSodium"));
          return 0.306f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Bread::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Bread::toString"));
          std::stringstream result;
          result << "Bread(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
