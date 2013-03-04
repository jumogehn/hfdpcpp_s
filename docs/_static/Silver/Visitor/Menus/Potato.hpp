#ifndef	_HFDP_CPP_VISITOR_POTATO_HPP_
#define _HFDP_CPP_VISITOR_POTATO_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Potato : public Ingredient {

      public:
        explicit Potato( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Potato::Potato"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Potato::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getCalories"));
          return 57.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getCarbs"));
          return 13.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getProtien"));
          return 1.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getFat"));
          return 0.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Potato::getSodium"));
          return 0.147f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Potato::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Potato::toString"));
          std::stringstream result;
          result << "Potatp(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
