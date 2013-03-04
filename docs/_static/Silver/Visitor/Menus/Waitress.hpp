#ifndef	_HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_
#define _HFDP_CPP_VISITOR_MENUS_WAITRESS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Visitor {
    namespace Menus {

      class Waitress : Visitor {

        MenuComponent* _allMenus;

        Waitress( const Waitress& ); // Disable copy constructor
        void operator=( const Waitress& ); // Disable assignment operator

      public:
        explicit Waitress( MenuComponent* allMenus ) :
          _allMenus( allMenus )
        {
          assert( allMenus );
          HUM_TRACE(ACE_TEXT("Waitress::Waitress"));
        }
        void printMenu()
        {
          HUM_TRACE(ACE_TEXT("Waitress::printMenu"));
          _allMenus->accept( this );
        }
        virtual void visit( Menu* component )
        {
          assert( component );
          HUM_TRACE(ACE_TEXT("Waitress::visit of Menu"));
          std::stringstream tokens( component->toString() );
          std::string token;
          std::cout << std::endl;
          while( std::getline( tokens, token, '\t' ) ) {
            std::cout << token;
            std::cout << std::endl << "\t";
          }
        }
        virtual void visit( MenuItem* component )
        {
          assert( component );
          HUM_TRACE(ACE_TEXT("Waitress::visit of MenuItem"));
          std::stringstream tokens( component->toString() );
          std::string token;
          while( std::getline( tokens, token, '\t' ) ) {
            std::cout << std::endl << "\t\t";	// indent
            std::cout << token;
          }
          std::cout << " | ";
          std::cout << component->getHealthRating();
        }
        virtual void visit( Ingredient* component )
        {
          assert( component );
          HUM_TRACE(ACE_TEXT("Waitress::visit of Ingredient"));
          std::stringstream tokens( component->toString() );
          std::string token;
          while( std::getline( tokens, token, '\t' ) ) {
            std::cout << std::endl << "\t\t\t";	// indent
            std::cout << token;
          }
          std::cout << " | ";
          std::cout << component->getHealthRating();
        }
      };

    } // namespace Menus
  } // namespace Visitor
} // namespace HeadFirstDesignPatterns

#endif

