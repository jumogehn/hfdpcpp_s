#ifndef	_HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_
#define _HFDP_CPP_VISITOR_MIXED_VEGETABLES_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class MixedVegetables : public Ingredient {

      public:
        explicit MixedVegetables( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::MixedVegetables"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("MixedVegetables::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getCalories"));
          return 150.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getCarbs"));
          return 30.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getProtien"));
          return 7.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getFat"));
          return 1.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::getSodium"));
          return 0.225f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("MixedVegetables::toString"));
          std::stringstream result;
          result << "Mixed vegetables(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
