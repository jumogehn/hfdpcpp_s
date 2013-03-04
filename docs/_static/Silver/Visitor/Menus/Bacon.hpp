#ifndef	_HFDP_CPP_VISITOR_BACON_HPP_
#define _HFDP_CPP_VISITOR_BACON_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Bacon : public Ingredient {

      public:
        explicit Bacon(	float amount = 1.0f ) : Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Bacon::Bacon"));
        }
        void accept( Visitor* visitor)
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Bacon::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getCalories"));
          return 254.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getFat"));
          return 0.28f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getCholesterol"));
          return 0.27f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::getSodium"));
          return 0.08f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Bacon::toString"));
          std::stringstream result;
          result << "Bacon(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
