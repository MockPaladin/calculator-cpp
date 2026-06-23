#pragma once
#include <string>


enum class IntegralType {TanhSinh, MonteCarlo, Unknown};

IntegralType getIntegralType(const std::string &method);

double integrate(double (*f) (double), double a, double b, std::string method);
double integrate(double (*f) (double), double a, double b);