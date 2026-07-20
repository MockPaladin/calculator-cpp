#ifndef EXPRESSION_HPP_
#define EXPRESSION_HPP_

#include <iostream>

#include "expressionNode.hpp"
#include "literal.hpp"
#include "symbol.hpp"

class Expression : private ExpressionNode {
  private:
  public:
    explicit Expression(ExpressionNode expr_node);
    virtual double eval() = 0;

    friend std::ostream &operator<<(std::ostream &os, const Expression &expr);
};

#endif