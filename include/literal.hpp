#ifndef LITERAL_HPP_
#define LITERAL_HPP_

#include <iostream>

class Literal {
  public:
    explicit Literal(const double val) : value(val) {
    }

    double getValue() const {
        return value;
    }

    friend std::ostream &operator<<(std::ostream &os, const Literal &literal);

  private:
    double value;
};

#endif
