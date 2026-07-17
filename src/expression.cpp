#include "expression.hpp"
#include "symbol.hpp"
#include "literal.hpp"

class Expression {
private:
public:
  virtual double eval() = 0;
};