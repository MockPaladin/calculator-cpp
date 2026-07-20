#include "integrate.hpp"
#include "constants.hpp"
#include "integrate/monteCarlo.hpp"
#include "integrate/tanhSinh.hpp"
#include <string>
#include <unordered_map>

IntegralType getIntegralType(const std::string &method) {
    static const std::unordered_map<std::string, IntegralType> integralMap =
        {{"tanhSinh", IntegralType::TanhSinh},
         {"monteCarlo", IntegralType::MonteCarlo}};

    auto iterator = integralMap.find(method);
    if (iterator != integralMap.end()) {
        return iterator->second;
    }
    return IntegralType::Unknown;
}

double integrate(double (*f)(double), double a, double b) {
    double out = tanhSinh(f, a, b);
    if (out == constants::NaN) {
        return monteCarlo(f, a, b);
    } else {
        return out;
    }
}

double integrate(double (*f)(double), double a, double b, std::string method) {
    switch (getIntegralType(method)) {
        case IntegralType::TanhSinh:
            return tanhSinh(f, a, b);
        case IntegralType::MonteCarlo:
            return monteCarlo(f, a, b);
        case IntegralType::Unknown:
            return constants::NaN;
    }
    return constants::NaN;
}
