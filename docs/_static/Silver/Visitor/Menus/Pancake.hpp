#ifndef	_HFDP_CPP_VISITOR_PANCAKE_HPP_
#define _HFDP_CPP_VISITOR_PANCAKE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Pancake : public Ingredient {

      public:
        explicit Pancake( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Pancake::Pancake"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Pancake::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getCalories"));
          return 86.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getCarbs"));
          return 11.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getProtien"));
          return 2.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getFat"));
          return 4.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getCholesterol"));
          return 0.22f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::getSodium"));
          return 0.167f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Pancake::toString"));
          std::stringstream result;
          result << "Pancake(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
