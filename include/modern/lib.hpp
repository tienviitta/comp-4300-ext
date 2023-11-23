#pragma once

#include "fmt/core.h"
#include <cstddef>
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

/// \brief Own array class
///
/// Implements template array class
///
template <typename T> class PVArray {
    size_t m_size;
    T *m_arr;

  public:
    PVArray(size_t size) : m_size(size), m_arr(new T[size]){};
    ~PVArray() { delete[] m_arr; };
    void set(size_t index, T value) { m_arr[index] = value; };
    T get(size_t index) const { return m_arr[index]; };
    const T &operator[](size_t index) const { return m_arr[index]; }
    T &operator[](size_t index) { return m_arr[index]; }
    void print(const std::string &pre) {
        fmt::print("{}: [", pre);
        for (int i = 0; i < m_size - 1; ++i) {
            fmt::print("{}, ", m_arr[i]);
        }
        fmt::print("{}]\n", m_arr[m_size - 1]);
    };
};