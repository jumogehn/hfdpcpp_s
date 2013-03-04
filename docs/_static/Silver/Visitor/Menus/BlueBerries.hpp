#ifndef	_HFDP_CPP_VISITOR_BERRIES_HPP_
#define _HFDP_CPP_VISITOR_BERRIES_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class BlueBerries : public Ingredient {

      public:
        explicit BlueBerries( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::BlueBerries"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("BlueBerries::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getCalories"));
          return 83.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getCarbs"));
          return 21.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getProtien"));
          return 1.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getFat"));
          return 0.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::getSodium"));
          return 0.1f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("BlueBerries::toString"));
          std::stringstream result;
          result << "Blue berries(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
