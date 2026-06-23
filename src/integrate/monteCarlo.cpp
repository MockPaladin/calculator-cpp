/* 
 * "Borrowed" from <https://cameron-mcelfresh.medium.com/monte-carlo-integration-313b37157852>,
 * then modified.
 */


#include <cmath>
#include <stdexcept>
#include <constants.hpp>
#include <integrate/monteCarlo.hpp>

double monteCarlo(double (*f) (double), double a, double b, int nMax) {

  if (nMax == 0) return constants::NaN;

	double total, i = 0;
	double r, val;

  try {

    while (i < nMax - 1) {
	  	r = a + ((double) (rand()) / RAND_MAX) * (b - a);
      val = f(r);
      total += val;
      i++;
    }
  } catch (const std::exception &e) {
      return constants::NaN;
    }

	return (double) (b - a) * total / nMax;
}

double monteCarlo(double (*f) (double), double a, double b) {
  return monteCarlo(f, a, b, constants::nMaxDefault);
}