#include "literal.hpp"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Literal &literal) {
  os << literal.getValue();
  return os;
}
