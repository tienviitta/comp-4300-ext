#include <modern/lib.hpp>

#include <fmt/format.h>

#include <iostream>
#include <tuple>
#include <vector>

int main() {
    std::vector<double> input = {1.2, 2.3, 3.4, 4.5};
    auto [mean, stddev] = accumulate_vector(input);
    fmt::print("Mean: {}, Stddev: {}\n", mean, stddev);
    return 0;
}
