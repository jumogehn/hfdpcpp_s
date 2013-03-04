#ifndef	_HFDP_CPP_VISITOR_FISH_HPP_
#define _HFDP_CPP_VISITOR_FISH_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Fish : public Ingredient {

      public:
        explicit Fish( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Fish::Fish"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Fish::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getCalories"));
          return 189.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getCarbs"));
          return 0.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getProtien"));
          return 41.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getFat"));
          return 2.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getCholesterol"));
          return 0.99f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Fish::getSodium"));
          return 0.125f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Fish::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Fish::toString"));
          std::stringstream result;
          result << "Fish(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
