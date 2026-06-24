#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
// #include <calculator.hpp>
#include <integrate.hpp>

double f(double x) {
  return exp(x);
}

int main() {

  double output = integrate(f, 0.0, 2.0, "monteCarlo");
  double exact = exp(2) - 1.0;
  double diff = output - exact;
  std::cout << std::setprecision(11) << diff << std::endl;

  return 0;
}
