//===--- Utilities.hpp - ----------------------------------------*- C++ -*-===//
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

//http://chadaustin.me/cppinterface.html

#ifndef __UTILITIES_H__
#define __UTILITIES_H__

#ifdef WIN32
  #define CALL __stdcall
#else
  #define CALL
#endif

extern "C" void CALL PrintMessage(const char * pMessage, bool newline = true);
extern "C" void CALL PrintNumber(unsigned int num, bool newline = true);

#endif

