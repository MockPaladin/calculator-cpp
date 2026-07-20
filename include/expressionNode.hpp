#ifndef EXPRESSION_NODE_HPP_
#define EXPRESSION_NODE_HPP_

#include "expression.hpp"
#include "literal.hpp"
#include "symbol.hpp"

class ExpressionNode {
  private:
  public:
    explicit ExpressionNode(Literal lit1, Literal lit2, const char op);
    explicit ExpressionNode(Symbol sym1, Symbol sym2, const char op);
    double eval() {
        return 0.0;
    }
};

#endif