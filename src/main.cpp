#include <iostream>
#include <string>
#include "calculator.cpp"

int main() {

  std::string input;
  Calculator calculator;

  std::cout << "Hello!";

  std::cin >> input;

  std::string output = calculator.calculate(input);
  std::cout << output;
  
  return 0;
}
