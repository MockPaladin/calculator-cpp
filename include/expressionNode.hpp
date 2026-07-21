#ifndef EXPRESSION_NODE_HPP_
#define EXPRESSION_NODE_HPP_

#include "literal.hpp"

class Symbol; // forward declaration

class ExpressionNode {
  public:
    explicit ExpressionNode(const Literal &lit1, const Literal &lit2,
                            const char op);
    explicit ExpressionNode(const Symbol &sym1, const Symbol &sym2,
                            const char op);
    double eval() {
        return 0.0;
    }
};

#endif
