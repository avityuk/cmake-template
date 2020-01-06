#include <iostream>

#include "foo.h"

int main() {
  Foo foo;
  std::cout << "Hello, World! " << foo.Bar(10) << std::endl;
  return 0;
}
