#ifndef PYTHONIC_INCLUDE_BUILTIN_SET_DIFFERENCE_HPP
#define PYTHONIC_INCLUDE_BUILTIN_SET_DIFFERENCE_HPP

#include "pythonic/include/types/set.hpp"
#include "pythonic/include/utils/proxy.hpp"

namespace pythonic
{

  namespace builtins
  {

    namespace set
    {

      template <typename T, typename... Types>
      types::set<T> difference(types::set<T> const &set,
                               Types const &... others);

      template <typename T, typename... Types>
      types::set<T> difference(types::set<T> &&set, Types const &... others);

      template <typename... Types>
      types::empty_set difference(types::empty_set const &set,
                                  Types const &... others);

      template <typename T>
      types::set<T> difference(types::set<T> const &set);

      template <typename T>
      types::set<T> difference(types::set<T> &&set);

      types::empty_set difference(types::empty_set const &set);

      PROXY_DECL(pythonic::builtins::set, difference);
    }
  }
}
#endif