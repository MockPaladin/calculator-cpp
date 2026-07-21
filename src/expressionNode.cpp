#include "expressionNode.hpp"
#include "literal.hpp"
#include "symbol.hpp"

ExpressionNode::ExpressionNode(const Literal &lit1, const Literal &lit2,
                               const char op) {
    std::cout << lit1 << op << lit2 << std::endl;
}
ExpressionNode::ExpressionNode(const Symbol &sym1, const Symbol &sym2,
                               const char op) {
    std::cout << sym1 << op << sym2 << std::endl;
}
