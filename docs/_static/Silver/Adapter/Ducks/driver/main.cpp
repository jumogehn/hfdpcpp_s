//===--- main.cpp - ---------------------------------------------*- C++ -*-===//
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

#include "Duck.hpp"
#include "Turkey.hpp"
#include "TurkeyAdapter.hpp"
#include "WildTurkey.hpp"
#include "DuckAdapter.hpp"
#include "MallardDuck.hpp"
#include "Utilities.hpp"
#include "DucksConfig.h"
#include <iostream>

using namespace HFDP::Adapter::Ducks;

void testDuck( const std::shared_ptr<Duck> duck )
{
  PrintMessage("testDuck");
  duck->quack();
  duck->fly();
}

int main( int argc, char* argv[] )
{
  std::cout << argv[0] << " Version " << Ducks_VERSION_MAJOR << "."
    << Ducks_VERSION_MINOR << std::endl << std::endl;

  auto duck = std::make_shared<MallardDuck>();
  std::shared_ptr< Turkey > duckAdapter = std::make_shared<DuckAdapter>(duck);

  for( int i = 0; i < 10; i++ ) {
    PrintMessage("The DuckAdapter says...");
    duckAdapter->gobble();
    duckAdapter->fly();
  }

  auto turkey = std::make_shared<WildTurkey>();
  std::shared_ptr< Duck > turkeyAdapter = std::make_shared<TurkeyAdapter>(turkey);

  PrintMessage("The Turkey says...");
  turkey->gobble();
  turkey->fly();

  PrintMessage("The Duck says...");
  testDuck( duck );

  PrintMessage("The TurkeyAdapter says...");
  testDuck( turkeyAdapter );

  return 0;
}

