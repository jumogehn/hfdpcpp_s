#ifndef	_HFDP_CPP_VISITOR_SAUERKRAUT_HPP_
#define _HFDP_CPP_VISITOR_SAUERKRAUT_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Sauerkraut : public Ingredient {

      public:
        explicit Sauerkraut( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::Sauerkraut"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Sauerkraut::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getCalories"));
          return 31.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getCarbs"));
          return 6.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getProtien"));
          return 1.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getFat"));
          return 0.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::getSodium"));
          return 0.437f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Sauerkraut::toString"));
          std::stringstream result;
          result << "SauerKraut(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
