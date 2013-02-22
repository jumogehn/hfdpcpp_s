
#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "Pizzas.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

int main( int argc, char* argv[] )
{
  HUM_LOG_MANAGER->redirectToFile(ACE_TEXT("trace.log"));

  HUM_TRACE(ACE_TEXT("main"));

  SimplePizzaFactory factory;
  PizzaStore store( &factory );

  std::auto_ptr< Pizza>pizza(store.orderPizza( "cheese" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  pizza = std::auto_ptr< Pizza>(store.orderPizza( "veggie" ) );
  std::cout << "We ordered a " << pizza->getName() << std::endl;

  return 0;
}

