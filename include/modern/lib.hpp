#pragma once

#include <tuple>
#include <vector>

/// \brief Accumulate a vector to produce the mean and the standard deviation of the
/// distribution.
///
/// This computes the mean and the standard deviation of a vector of double values.
///
std::tuple<double, double>
accumulate_vector(const std::vector<double> &values ///< The vector of values
);
