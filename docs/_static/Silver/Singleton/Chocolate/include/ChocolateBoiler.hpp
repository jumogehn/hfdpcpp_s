//===--- ChocolateBoiler.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_
#define _HFDP_CPP_SINGLETON_CHOCOLATE_BOILER_HPP_


namespace HFDP {
  namespace Factory {
    namespace Singleton {

      class ChocolateBoiler {

        static ChocolateBoiler* _uniqueInstance;
        bool _empty;
        bool _boiled;

        ChocolateBoiler( const ChocolateBoiler& ); // Disable copy constructor
        void operator=( const ChocolateBoiler& ); // Disable assignment operator

        ChocolateBoiler();
        ~ChocolateBoiler();

      public:
        static ChocolateBoiler* getInstance();
        void fill();
        void drain();
        void boil();
        bool isEmpty() const;
        bool isBoiled() const;
      };

    } // namespace Singleton
  } // namespace Factory
} // namespace HFDP

#endif 
