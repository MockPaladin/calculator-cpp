/*
 * "Borrowed" from <https://www.genivia.com/files/qthsh.pdf>,
 * then translated to C++ and modified.
 */
#include <cmath>
#include <constants.hpp>
#include <integrate/tanh-sinh.hpp>

// integrate function f, range a... b
double tanh_sinh(double (*f)(double), double a, double b)
{
  double c = (a + b) / 2;
  double d = (b - a) / 2;
  double s = f(c);
  double e, v, h = 2;
  int k = 0;
  do
  {
    double p = 0, q, fp = 0, fm = 0, t, eh;
    h /= 2;
    t = eh = std::exp(h);
    if (k > 0)
      eh *= eh;
    do
    {
      double u = std::exp(1 / t - t);
      double r = u * 2 / (u + 1);
      double w = (t + 1 / t) * r / (u + 1);
      double x = d * r;
      if (a + x > a)
        fp = f(a + x);
      if (b - x < b)
        fm = f(b - x);
      q = w * (fp + fm);
      p += q;
      t *= eh;
    } while (fabs(q) > constants::integration_tolerance * fabs(p));
    v = s - p;
    s += p;
    ++k;
  } while (fabs(v) > constants::integration_tolerance * fabs(s) && k <= constants::num_iters);
  e = fabs(v) / (fabs(s) + constants::integration_tolerance);
  return d * s * h;
}