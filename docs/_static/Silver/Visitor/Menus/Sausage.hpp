#ifndef	_HFDP_CPP_VISITOR_SAUSAGE_HPP_
#define _HFDP_CPP_VISITOR_SAUSAGE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Sausage : public Ingredient {

      public:
        explicit Sausage( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Sausage::Sausage"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Sausage::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getCalories"));
          return 94.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getCarbs"));
          return 0.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getProtien"));
          return 5.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getFat"));
          return 8.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getCholesterol"));
          return 0.23f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::getSodium"));
          return 0.184f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::isVegetarian"));
          return false;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Sausage::toString"));
          std::stringstream result;
          result << "Sausage(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
