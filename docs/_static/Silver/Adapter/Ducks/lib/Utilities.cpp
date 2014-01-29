
#include <iostream>
#include <cassert>

void PrintMessage(const char * pMessage)
{
  assert(pMessage);
  std::cout << pMessage << std::endl;
}

