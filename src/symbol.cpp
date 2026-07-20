#include "symbol.hpp"
#include "expressionNode.hpp"

#include <iostream>

Symbol::Symbol(const char n) : name(n) {
}

std::ostream &operator<<(std::ostream &os, const Symbol &symbol) {
    os << symbol.getName();
    return os;
}

ExpressionNode operator+(const Symbol &sym1, const Symbol &sym2) {
    return ExpressionNode(sym1, sym2, '+');
}