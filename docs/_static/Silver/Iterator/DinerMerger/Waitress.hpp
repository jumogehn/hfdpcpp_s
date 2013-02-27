#ifndef	_HFDP_CPP_ITERATOR_DINER_MERGER_WAITRESS_HPP_
#define _HFDP_CPP_ITERATOR_DINER_MERGER_WAITRESS_HPP_

#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

namespace HeadFirstDesignPatterns {
  namespace Iterator {
    namespace DinerMerger {

      class Waitress {
        PancakeHouseMenu* _pancakeHouseMenu;
        DinerMenu* _dinerMenu;

        Waitress( const Waitress& ); // Disable copy constructor
        void operator=( const Waitress& ); // Disable assignment operator

        void printMenu( Iterator<MenuItem>* iterator )
        {
          HUM_TRACE(ACE_TEXT("Waitress::printMenu"));
          while( iterator->hasNext() ) {
            MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
            std::cout << menuItem->getName() << ", ";
            std::cout << menuItem->getPrice() << " -- ";
            std::cout << menuItem->getDescription() << std::endl;
          }
        }
        void printVegetarianMenu( Iterator<MenuItem>* iterator )
        {
          HUM_TRACE(ACE_TEXT("Waitress::printVegetarianMenu"));
          while( iterator->hasNext() ) {
            MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
            if( menuItem->isVegetarian() ) {
              std::cout << menuItem->getName() << ", ";
              std::cout << menuItem->getPrice() << " -- ";
              std::cout << menuItem->getDescription() << std::endl;
            }
          }
        }
        bool isVegetarian( std::string name, Iterator<MenuItem>* iterator )
        {
          HUM_TRACE(ACE_TEXT("Waitress::isVegetarian"));
          while( iterator->hasNext() ) {
            MenuItem* menuItem = dynamic_cast< MenuItem* >( iterator->next() );
            if( menuItem->getName().compare( name ) == 0 ) {
              if( menuItem->isVegetarian() ) {
                return true;
              }
            }
          }
          return false;
        }

      public:
        Waitress(PancakeHouseMenu* pancakeHouseMenu, DinerMenu* dinerMenu) :
          _pancakeHouseMenu(pancakeHouseMenu), _dinerMenu(dinerMenu)
        {
          HUM_TRACE(ACE_TEXT("Waitress::Waitress"));
        }
        void printMenu()
        {
          HUM_TRACE(ACE_TEXT("Waitress::printMenu"));
          Iterator<MenuItem>* pancakeIterator
            = _pancakeHouseMenu->createIterator();
          Iterator<MenuItem>* dinerIterator = _dinerMenu->createIterator();

          std::cout << "MENU\n----\nBREAKFAST" << std::endl;
          printMenu(pancakeIterator);
          std::cout << "\nLUNCH" << std::endl;
          printMenu(dinerIterator);
        }
        void printVegetarianMenu()
        {
          HUM_TRACE(ACE_TEXT("Waitress::printVegetarianMenu"));
          printVegetarianMenu( _pancakeHouseMenu->createIterator() );
          printVegetarianMenu( _dinerMenu->createIterator() );
        }
        bool isItemVegetarian( std::string name)
        {
          HUM_TRACE(ACE_TEXT("Waitress::isItemVegetarian"));
          Iterator<MenuItem>* breakfastIterator
            = _pancakeHouseMenu->createIterator();
          if( isVegetarian(name, breakfastIterator) ) {
            return true;
          }
          Iterator<MenuItem>* dinnerIterator = _dinerMenu->createIterator();
          if( isVegetarian(name, dinnerIterator) ) {
            return true;
          }
          return false;
        }
      };

    } // namespace DinerMerger
  } // namespace Iterator
} // namespace HeadFirstDesignPatterns

#endif

