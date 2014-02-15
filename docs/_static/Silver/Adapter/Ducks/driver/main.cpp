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
#include <stdio.h>

using namespace HFDP::Adapter::Ducks;

void testDuck( const Duck* duck )
{
  PrintMessage("testDuck");
  duck->quack();
  duck->fly();
}

int main( int argc, char* argv[] )
{
  fprintf(stdout,"%s Version %d.%d\n\n",
          argv[0],
          Ducks_VERSION_MAJOR,
          Ducks_VERSION_MINOR);

  std::unique_ptr< MallardDuck > duck( new MallardDuck() );
  std::unique_ptr< Turkey > duckAdapter( new DuckAdapter( duck.get() ) );

  for( int i = 0; i < 10; i++ ) {
    PrintMessage("The DuckAdapter says...");
    duckAdapter->gobble();
    duckAdapter->fly();
  }

  std::unique_ptr< WildTurkey > turkey( new WildTurkey() );
  std::unique_ptr< Duck > turkeyAdapter( new TurkeyAdapter( turkey.get() ) );

  PrintMessage("The Turkey says...");
  turkey->gobble();
  turkey->fly();

  PrintMessage("The Duck says...");
  testDuck( duck.get() );

  PrintMessage("The TurkeyAdapter says...");
  testDuck( turkeyAdapter.get() );

  return 0;
}

