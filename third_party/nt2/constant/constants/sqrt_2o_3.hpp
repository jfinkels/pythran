//==============================================================================
//         Copyright 2003 - 2011   LASMEA UMR 6602 CNRS/Univ. Clermont II
//         Copyright 2009 - 2011   LRI    UMR 8623 CNRS/Univ Paris Sud XI
//
//          Distributed under the Boost Software License, Version 1.0.
//                 See accompanying file LICENSE.txt or copy at
//                     http://www.boost.org/LICENSE_1_0.txt
//==============================================================================
#ifndef NT2_CONSTANT_CONSTANTS_SQRT_2O_3_HPP_INCLUDED
#define NT2_CONSTANT_CONSTANTS_SQRT_2O_3_HPP_INCLUDED

#include <boost/simd/constant/include/constants/sqrt_2o_3.hpp>
#include <nt2/include/functor.hpp>

namespace nt2
{
  namespace tag
  {
    #ifdef DOXYGEN_ONLY
    /*! \brief Same as \classref{boost::simd::tag::Sqrt_2o_3_} **/
    struct sqrt_2o_3_ {};
    #endif
    using boost::simd::tag::Sqrt_2o_3;
  }

  #ifdef DOXYGEN_ONLY
  /*! \brief Same as \funcref{boost::simd::Sqrt_2o_3} **/
  template<class... Args>
  details::unspecified sqrt_2o_3(Args&&... args);
  #endif
  using boost::simd::Sqrt_2o_3;
}

#include <nt2/constant/common.hpp>

#endif
