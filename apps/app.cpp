#include <cstddef>
#include <modern/lib.hpp>

#include <fmt/format.h>

#include <iostream>
#include <tuple>
#include <vector>

int main() {
    // Mean and stddev
    std::vector<double> input = {1.2, 2.3, 3.4, 4.5};
    auto [mean, stddev] = accumulate_vector(input);
    fmt::print("Mean: {}, Stddev: {}\n", mean, stddev);
    // PVArray
    size_t N = 10;
    PVArray<double> myArr(10);
    myArr.set(N / 2, 1);
    myArr[0] = 1;
    myArr[N - 1] = 1;
    myArr.print("myArr");
    fmt::print("myArr[{}] = {}\n", N / 2, myArr[N / 2]);
    return 0;
}
