#ifndef	_HFDP_CPP_VISITOR_VISITOR_HPP_
#define _HFDP_CPP_VISITOR_VISITOR_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Ingredient;
      class MenuItem;
      class Menu;

      class Visitor {

      protected:
        explicit Visitor()
        {
          HUM_TRACE(ACE_TEXT("Visitor::Visitor"));
        }
      public:
        virtual ~Visitor()
        {
          HUM_TRACE(ACE_TEXT("Visitor::~Visitor"));
        }
        virtual void visit( Menu* component ) = 0;
        virtual void visit( MenuItem* component ) = 0;
        virtual void visit( Ingredient* component ) = 0;
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif
