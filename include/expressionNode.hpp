#ifndef EXPRESSION_NODE_HPP_
#define EXPRESSION_NODE_HPP_

#include "literal.hpp"

// Forward declaration to avoid circular include dependency
class Symbol;

class ExpressionNode {
  public:
    explicit ExpressionNode(Literal lit1, Literal lit2, const char op);
    explicit ExpressionNode(const Symbol &sym1, const Symbol &sym2,
                            const char op);
    double eval() {
        return 0.0;
    }
};

#endif