#include <string>
#include <unordered_map>
#include <constants.hpp>
#include <integrate.hpp>
#include <integrate/tanhSinh.hpp>

IntegralType getIntegralType(const std::string &method) {
  static const std::unordered_map<std::string, IntegralType> integralMap = {
    {"tanhSinh", IntegralType::TanhSinh}
  };

  std::unordered_map<std::string, IntegralType>::const_iterator iterator = integralMap.find(method);
  if (iterator != integralMap.end()) {
    return iterator->second;
  }
  return IntegralType::Unknown;
}

double integrate(double (*f) (double), double a, double b) {
  double out = tanhSinh(f, a, b);
  if (out == constants::NaN) {
    return constants::NaN;
  } else {
    return out;
  }
}

double integrate (double (*f) (double), double a, double b, std::string method) {
  switch (getIntegralType(method)) {
    case IntegralType::TanhSinh:
      return tanhSinh(f, a, b);
  }
  return constants::NaN;
}