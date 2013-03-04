#ifndef	_HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_
#define _HFDP_CPP_VISITOR_INGREDIENT_DECORATOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class IngredientDecorator : public Ingredient{

        IngredientDecorator( const IngredientDecorator& );
        void operator=( const IngredientDecorator& );

      protected:
        std::auto_ptr< Ingredient > _ingredient;
        explicit IngredientDecorator( Ingredient* ingredient ) :
          _ingredient( ingredient )
        {
          assert( ingredient );
          HUM_TRACE(ACE_TEXT("IngredientDecorator::IngredientDecorator"));
        }
      public:
        virtual ~IngredientDecorator()
        {
          HUM_TRACE(ACE_TEXT("IngredientDecorator::~IngredientDecorator"));
        }
      };
    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
