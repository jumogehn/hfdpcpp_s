#ifndef	_HFDP_CPP_VISITOR_LETTUS_HPP_
#define _HFDP_CPP_VISITOR_LETTUS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Lettus : public Ingredient {

      public:
        explicit Lettus( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Lettus::Lettus"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Lettus::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getCalories"));
          return 1.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getCarbs"));
          return 0.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getFat"));
          return 0.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::getSodium"));
          return 0.0f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Lettus::toString"));
          std::stringstream result;
          result << "Lettus(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
