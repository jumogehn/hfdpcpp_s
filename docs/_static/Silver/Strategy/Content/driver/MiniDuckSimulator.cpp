//===--- MiniDuckSimulator.cpp - --------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

#include "MallardDuck.hpp"
#include "RubberDuck.hpp"
#include "DecoyDuck.hpp"
#include "ModelDuck.hpp"
#include "FlyRocketPowered.hpp"
#include <memory>

using namespace HFDP::Strategy;

int main(int argc, char* argv[]) {

  std::unique_ptr< MallardDuck > mallard( new MallardDuck() );
  std::unique_ptr< RubberDuck > rubberDuckie( new RubberDuck );
  std::unique_ptr< DecoyDuck > decoy( new DecoyDuck );
  std::unique_ptr< ModelDuck > model( new ModelDuck );

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
