
#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "DinerMerger.hpp"

using namespace HeadFirstDesignPatterns::Iterator::DinerMerger;

int main( int argc, char* argv[] ) {

  HUM_LOG_MANAGER->redirectToFile(ACE_TEXT("trace.log"));

  HUM_TRACE(ACE_TEXT("main"));

  std::auto_ptr< PancakeHouseMenu > pancakeHouseMenu( new PancakeHouseMenu() );
  std::auto_ptr< DinerMenu > dinerMenu( new DinerMenu() );
  std::auto_ptr< Waitress > waitress(
    new Waitress(pancakeHouseMenu.get(), dinerMenu.get() ) );

  waitress->printMenu();

  return 0;
}
