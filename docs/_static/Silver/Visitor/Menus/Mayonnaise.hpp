#ifndef	_HFDP_CPP_VISITOR_MAYONNASIE_HPP_
#define _HFDP_CPP_VISITOR_MAYONNASIE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Mayonnaise : public Ingredient {

      public:
        explicit Mayonnaise( float amount = 1.0f ) :
          Ingredient( amount )
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::Mayonnaise"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Mayonnaise::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getCalories"));
          return 916.0f;
        };
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getCarbs"));
          return 56.0f;
        };
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getProtien"));
          return 2.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getFat"));
          return 78.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getCholesterol"));
          return 0.61f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::getSodium"));
          return 1.671f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Mayonnaise::toString"));
          std::stringstream result;
          result << "Mayonnaise(" << _amount << ")";
          return result.str();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
