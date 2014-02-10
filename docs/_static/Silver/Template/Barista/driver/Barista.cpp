//===--- Barista.cpp - ------------------------------------------*- C++ -*-===//
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

#include "Tea.hpp"
#include "Coffee.hpp"
#include "TeaWithHook.hpp"
#include "CoffeeWithHook.hpp"
#include <memory>
#include <iostream>

using namespace HFDP::Template::Barista;

int main( int argc, char* argv[] ) {

  std::unique_ptr< Tea > tea( new Tea() );
  std::unique_ptr< Coffee > coffee( new Coffee() );

  std::cout << std::endl << "Making tea..." << std::endl;
  tea->prepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffee->prepareRecipe();

  std::unique_ptr< TeaWithHook > teaHook( new TeaWithHook() );
  std::unique_ptr< CoffeeWithHook > coffeeHook( new CoffeeWithHook() );

  std::cout << std::endl << "Making tea..."<< std::endl;
  teaHook->prepareRecipe();

  std::cout << std::endl << "Making coffee..."<< std::endl;
  coffeeHook->prepareRecipe();

  return 0;
}
