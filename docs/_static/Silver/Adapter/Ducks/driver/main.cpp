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

using namespace HFDP::Adapter::Ducks;

void testDuck( const Duck* duck )
{
  PrintMessage("testDuck");
  duck->quack();
  duck->fly();
}

int main( int argc, char* argv[] )
{
  PrintMessage("main");

  std::auto_ptr< MallardDuck > duck( new MallardDuck() );

#if 0
//#ifdef _DUCK_ADAPTER_
//Crashes when destroyed
  std::auto_ptr< Turkey > duckAdapter( new DuckAdapter( duck.get() ) );

  for( int i = 0; i < 10; i++ ) {
    PrintMessage("The DuckAdapter says...");
    duckAdapter->gobble();
    duckAdapter->fly();
  }
#else
  std::auto_ptr< WildTurkey > turkey( new WildTurkey() );
  std::auto_ptr< Duck > turkeyAdapter( new TurkeyAdapter( turkey.get() ) );

  PrintMessage("The Turkey says...");
  turkey->gobble();
  turkey->fly();

  PrintMessage("The Duck says...");
  testDuck( duck.get() );

  PrintMessage("The TurkeyAdapter says...");
  testDuck( turkeyAdapter.get() );
#endif

  return 0;
}
