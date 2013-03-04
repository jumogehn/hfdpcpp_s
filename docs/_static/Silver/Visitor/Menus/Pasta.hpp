#ifndef	_HFDP_CPP_VISITOR_PASTA_HPP_
#define _HFDP_CPP_VISITOR_PASTA_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Pasta : public Ingredient {

      public:
        explicit Pasta( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Pasta::Pasta"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Pasta::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getCalories"));
          return 220.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getCarbs"));
          return 43.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getProtien"));
          return 8.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getFat"));
          return 1.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getCholesterol"));
          return 0.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::getSodium"));
          return 0.179f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Pasta::toString"));
          std::stringstream result;
          result << "Pasta(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
