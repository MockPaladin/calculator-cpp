#include <iostream>
#include <string>
// #include <calculator.hpp>
#include <integrate/tanh-sinh.hpp>

double f(double x) {return x * 2;}

int main() {

  double output = tanh_sinh(f, 0.0, 2.0);
  std::cout << output << std::endl;
  
  return 0;
}
