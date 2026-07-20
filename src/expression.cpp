#include "expression.hpp"
#include "expressionNode.hpp"
#include "literal.hpp"
#include "symbol.hpp"

Expression::Expression(ExpressionNode expr_node) : ExpressionNode(expr_node) {
    expr_node.eval();
}

double Expression::eval() {
    return 0.0;
}

std::ostream &operator<<(std::ostream &os, Expression &expr) {
    os << expr.eval();
    return os;
}