//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_CORE_FUNCTIONS_EXPR_NBLINES_HPP_INCLUDED
#define NT2_CORE_FUNCTIONS_EXPR_NBLINES_HPP_INCLUDED

#include <nt2/core/functions/nblines.hpp>
#include <nt2/include/functions/size.hpp>
#include <nt2/include/functions/numel.hpp>
#include <nt2/include/functions/isempty.hpp>

namespace nt2 { namespace ext
{


  NT2_FUNCTOR_IMPLEMENTATION( nt2::tag::nblines_, tag::cpu_
                            , (A0)(A1)
                            , ((ast_<A0, nt2::container::domain>))
                              (scalar_< integer_<A1> >)
                            )
  {
    typedef std::size_t result_type;

    BOOST_FORCEINLINE
    result_type operator()(const A0& a0,const A1& dim) const
    {
      if (nt2::isempty(a0))
        return 0;
      else
        return nt2::numel(a0)/nt2::size(a0, dim);
    }
  };
} }

#endif

