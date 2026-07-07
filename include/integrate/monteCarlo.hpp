#ifndef INTEGRATE_MONTE_CARLO_HPP_
#define INTEGRATE_MONTE_CARLO_HPP_

double monteCarlo(double (*f)(double), double a, double b, int nMax);

double monteCarlo(double (*f)(double), double a, double b);

#endif
