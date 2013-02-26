
#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Barista.hpp"

using namespace HeadFirstDesignPatterns::Template::Barista;

int main( int argc, char* argv[] ) {

  HUM_LOG_MANAGER->redirectToFile(ACE_TEXT("trace.log"));

  HUM_TRACE(ACE_TEXT("main"));

  std::auto_ptr< Tea > tea( new Tea() );
  std::auto_ptr< Coffee > coffee( new Coffee() );

  std::cout << std::endl << "Making tea..." << std::endl;
  tea->prepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffee->prepareRecipe();

  std::auto_ptr< TeaWithHook > teaHook( new TeaWithHook() );
  std::auto_ptr< CoffeeWithHook > coffeeHook( new CoffeeWithHook() );

  std::cout << std::endl << "Making tea..."<< std::endl;
  teaHook->prepareRecipe();

  std::cout << std::endl << "Making coffee..."<< std::endl;
  coffeeHook->prepareRecipe();

  return 0;
}
