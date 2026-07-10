#ifndef SYMBOL_HPP_
#define SYMBOL_HPP_

#include <iostream>

class Symbol {
public:

  explicit Symbol(const char n);
  char getName() const {return name;}
  friend std::ostream &operator<<(std::ostream &os, const Symbol &symbol);

private:
  const char name;
};

#endif
