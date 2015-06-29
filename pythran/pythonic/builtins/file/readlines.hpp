#ifndef PYTHONIC_BUILTIN_FILE_READLINES_HPP
#define PYTHONIC_BUILTIN_FILE_READLINES_HPP

#include "pythonic/include/builtins/file/readlines.hpp"

#include "pythonic/types/file.hpp"
#include "pythonic/types/list.hpp"
#include "pythonic/types/str.hpp"
#include "pythonic/utils/proxy.hpp"

namespace pythonic
{

  namespace builtins
  {

    namespace file
    {

      template <class F>
      types::list<types::str> readlines(F &&f)
      {
        return f.readlines();
      }

      template <class F>
      types::list<types::str> readlines(F &&f, long sizehint)
      {
        return f.readlines(sizehint);
      }

      PROXY_IMPL(pythonic::builtins::file, readlines);
    }
  }
}
#endif