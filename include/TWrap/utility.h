// SPDX-FileCopyrightText: 2021 Lisa Biermann
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include <TWrap/TWrapException.h>
#include <unsupported/Eigen/CXX11/Tensor>
#include "Eigen/Dense"

using namespace Eigen;

/**
 * @file
 */
namespace TWrap
{
/**
 * @brief Overload << operator for vectors
 */
template <typename T>
std::ostream &operator<<(std::ostream &output, std::vector<T> const &values)
{
  output << " ( ";
  for (auto const &value : values)
  {
    output << value << " ";
  }
  output << ") ";
  return output;
}

} // namespace TWrap