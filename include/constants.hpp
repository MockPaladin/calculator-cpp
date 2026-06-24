#pragma once
#include <limits>

namespace constants {
inline constexpr double tolerance = 1e-7;
inline constexpr double numIters = 6;
inline constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
inline constexpr int nMaxDefault = 1e+7;
} // namespace constants