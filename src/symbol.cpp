#include "symbol.hpp"
#include <iostream>

Symbol::Symbol(const char n) : name(n) {
}

std::ostream &operator<<(std::ostream &os, const Symbol &symbol) {
  os << symbol.getName();
  return os;
}
