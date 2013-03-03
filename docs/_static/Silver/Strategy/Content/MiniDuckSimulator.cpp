#include "Hum_Log_Manager.h"
#include "Hum_Trace.h"

#include "MiniDuckSimulator.hpp"

using namespace HeadFirstDesignPatterns::Strategy;

int main(int argc, char* argv[]) {

  HUM_LOG_MANAGER->redirectToFile(ACE_TEXT("trace.log"));

  HUM_TRACE(ACE_TEXT("main"));

  std::auto_ptr< MallardDuck > mallard( new MallardDuck() );
  std::auto_ptr< RubberDuck > rubberDuckie( new RubberDuck );
  std::auto_ptr< DecoyDuck > decoy( new DecoyDuck );
  std::auto_ptr< ModelDuck > model( new ModelDuck );

  mallard->performQuack();
  mallard->performFly();

  rubberDuckie->performQuack();
  rubberDuckie->performFly();

  decoy->performQuack();
  decoy->performFly();

  model->performQuack();
  model->performFly();
  model->setFlyBehavior( new FlyRocketPowered() );
  model->performFly();

  return 0;
}
