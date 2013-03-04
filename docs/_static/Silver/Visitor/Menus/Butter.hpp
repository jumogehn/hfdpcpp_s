#ifndef	_HFDP_CPP_VISITOR_BUTTER_HPP_
#define _HFDP_CPP_VISITOR_BUTTER_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Butter : public Ingredient {

      public:
        explicit Butter( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Butter::Butter"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Butter::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getCalories"));
          return 141.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getProtien"));
          return 1.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getFat"));
          return 16.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getCholesterol"));
          return 0.30f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Butter::getSodium"));
          return 0.127f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Butter::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Butter::toString"));
          std::stringstream result;
          result << "Butter(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
