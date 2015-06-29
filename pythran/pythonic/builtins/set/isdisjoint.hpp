#ifndef PYTHONIC_BUILTIN_SET_ISDISJOINT_HPP
#define PYTHONIC_BUILTIN_SET_ISDISJOINT_HPP

#include "pythonic/include/builtins/set/isdisjoint.hpp"

#include "pythonic/types/set.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace builtins
  {

    namespace set
    {

      template <class T, class U>
      bool isdisjoint(types::set<T> const &calling_set, U const &arg_set)
      {
        return calling_set.isdisjoint(arg_set);
      }

      template <class U>
      bool isdisjoint(types::empty_set const &calling_set, U const &arg_set)
      {
        return true;
      }

      PROXY_IMPL(pythonic::builtins::set, isdisjoint);
    }
  }
}
#endif