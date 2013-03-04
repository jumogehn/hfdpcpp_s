#ifndef	_HFDP_CPP_VISITOR_STOCK_HPP_
#define _HFDP_CPP_VISITOR_STOCK_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Stock : public Ingredient {

        std::auto_ptr< Ingredient > _ingredient;
        float _factor;	// self=1.0, sauce=1.5, gravy=2.0, broth=0.5

      public:
        explicit Stock( Ingredient* ingredient, float factor ) :
          _factor( factor ), _ingredient( ingredient )
        {
          assert( ingredient ); assert( factor > 0.0f );
          HUM_TRACE(ACE_TEXT("Stock::Stock"));
        }
        void accept( Visitor* visitor )
        {
          assert( visitor );
          HUM_TRACE(ACE_TEXT("Stock::accept"));
          return visitor->visit( this );
        }
        float getCalories() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getCalories"));
          return _factor * _ingredient->getCalories();
        }
        float getCarbs() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getCarbs"));
          return _factor * _ingredient->getCarbs();
        }
        float getProtien() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getProtien"));
          return _factor * _ingredient->getProtien();
        }
        float getFat() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getFat"));
          return _factor * _ingredient->getFat();
        }
        float getCholesterol() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getCholesterol"));
          return _factor * _ingredient->getCholesterol();
        }
        float getSodium() const
        {
          HUM_TRACE(ACE_TEXT("Stock::getSodium"));
          return _factor * _ingredient->getSodium();
        }
        bool isVegetarian() const
        {
          HUM_TRACE(ACE_TEXT("Stock::isVegetarian"));
          return _ingredient->isVegetarian();
        }
        std::string toString() const
        {
          HUM_TRACE(ACE_TEXT("Stock::toString"));
          std::string result( "Stock" );

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
