#ifndef	_HFDP_CPP_VISITOR_TOAST_HPP_
#define _HFDP_CPP_VISITOR_TOAST_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Toast : public IngredientDecorator {

      public:
        explicit Toast( Ingredient* ingredient)
          : IngredientDecorator( ingredient )
        {
          HUM_TRACE(ACE_TEXT("Toast::Toast"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Toast::accept"));
          return _ingredient->accept( visitor );;
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getCalories"));
          return _ingredient->getCalories(); // no change
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getCarbs"));
          return _ingredient->getCarbs(); // no change
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getProtien"));
          return _ingredient->getProtien(); // no change
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getFat"));
          return _ingredient->getFat(); // no change
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getCholesterol"));
          return _ingredient->getCholesterol(); // no change
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Toast::getSodium"));
          return _ingredient->getSodium(); // no change
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Toast::isVegetarian"));
          return _ingredient->isVegetarian(); // no change
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Toast::toString"));
          std::string result( "Toast" );
          result.append( "(" );
          result.append( _ingredient->toString() );
          result.append( ")" );
          return result;
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
