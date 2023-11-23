#include <cmath>
#include <modern/lib.hpp>

#include <algorithm>
#include <numeric>
#include <tuple>
#include <vector>

std::tuple<double, double> accumulate_vector(const std::vector<double> &values) {
    double sum = std::accumulate(values.cbegin(), values.cend(), 0.0);
    double m = sum / values.size();
    double accum = 0.0;
    std::for_each(values.cbegin(), values.cend(),
                  [&](const double d) { accum += (d - m) * (d - m); });
    double stddev = std::sqrt(accum / (values.size() - 1));
    return {m, stddev};
}
