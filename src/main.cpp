#include <cstdio>
#include "libA.h"
#include "libB.h"

int main() {
  std::printf("%s\n", libB::hello().c_str());
  std::printf("%s\n", libA::hello_world().c_str());
  return 0;
}
