#include <algorithm>
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <modern/lib.hpp>

TEST_CASE("Quick check", "[main]") {
    // Values: {1.2, 2.3, 3.4, 4.5}; Mean: 2.85, Stddev: 1.42009
    std::vector<double> values{1.2, 2.3, 3.4, 4.5};
    auto [mean, stddev] = accumulate_vector(values);
    REQUIRE(mean == 2.85);
    REQUIRE(stddev == Approx(1.42009));
}
