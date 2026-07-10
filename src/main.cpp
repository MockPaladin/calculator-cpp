#include "literal.hpp"
#include "symbol.hpp"
#include <iostream>
#include <string>

int main() {
  Literal val = Literal(3.14);
  std::cout << val << std::endl;
  Symbol x = Symbol('x');
  std::cout << x << std::endl;
  return 0;
}
