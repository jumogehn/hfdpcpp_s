#ifndef	_HFDP_CPP_VISITOR_BAGEL_HPP_
#define _HFDP_CPP_VISITOR_BAGEL_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Bagel : public Ingredient {

      public:
        explicit Bagel( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Bagel::Bagel"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Bagel::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getCalories"));
          return 216.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getCarbs"));
          return 0.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getProtien"));
          return 0.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getFat"));
          return 1.4f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::getSodium"));
          return 0.0f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Bagel::toString"));
          std::stringstream result;
          result << "Bagel(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
