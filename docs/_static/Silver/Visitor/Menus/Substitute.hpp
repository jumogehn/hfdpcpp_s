#ifndef	_HFDP_CPP_VISITOR_SUBSTITUTE_HPP_
#define _HFDP_CPP_VISITOR_SUBSTITUTE_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Substitute : public IngredientDecorator {

      public:
        explicit Substitute( Ingredient* ingredient) : IngredientDecorator( ingredient )
        {
          HUM_TRACE(ACE_TEXT("Substitute::Substitute"));
        }
        void accept( Visitor* visitor )
        {
          HUM_TRACE(ACE_TEXT("Substitute::accept"));
          return _ingredient->accept( visitor );;
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getCalories"));
          return _ingredient->getCalories() / 2.0f;
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getCarbs"));
          return _ingredient->getCarbs() / 2.0f;
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getProtien"));
          return _ingredient->getProtien() / 2.0f;
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getFat"));
          return  _ingredient->getFat() / 2.0f;
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getCholesterol"));
          return _ingredient->getCholesterol() / 2.0f;
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::getSodium"));
          return _ingredient->getSodium() / 2.0f;
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::isVegetarian"));
          return true;
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Substitute::toString"));
          std::string result( "Substitute" );
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
