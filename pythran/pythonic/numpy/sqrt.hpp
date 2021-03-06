#ifndef PYTHONIC_NUMPY_SQRT_HPP
#define PYTHONIC_NUMPY_SQRT_HPP

#include "pythonic/include/numpy/sqrt.hpp"

#include "pythonic/utils/functor.hpp"
#include "pythonic/types/ndarray.hpp"
#include "pythonic/utils/numpy_traits.hpp"

#include <nt2/include/functions/sqrt.hpp>

namespace pythonic
{

  namespace numpy
  {
#define NUMPY_NARY_FUNC_NAME sqrt
#define NUMPY_NARY_FUNC_SYM nt2::sqrt
#include "pythonic/types/numpy_nary_expr.hpp"
  }
}

#endif
