#ifndef SYMBOL_HPP_
#define SYMBOL_HPP_

#include <iostream>

#include "expressionNode.hpp"

class Symbol {
  private:
    const char name;

  public:
    explicit Symbol(const char n);
    char getName() const {
        return name;
    }

    friend std::ostream &operator<<(std::ostream &os, const Symbol &symbol);
    friend ExpressionNode operator+(const Symbol &sym1, const Symbol &sym2);
};

#endif