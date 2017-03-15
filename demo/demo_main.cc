#include <iostream>

#include "base/strings/stringprintf.h"

__declspec(dllexport) int main();  

int main() {
  std::string hello_world = base::StringPrintf("%s", "Hello World!");
  std::cout << hello_world;
  return 0;
}
