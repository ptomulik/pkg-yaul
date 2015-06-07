// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/equal.hpp

/** // doc: yaul/tml/equal.hpp {{{
 * \file yaul/tml/equal.hpp
 * \brief Provides \ref yaul::tml::equal
 */ // }}}
#ifndef YAUL_TML_EQUAL_HPP
#define YAUL_TML_EQUAL_HPP

#include <yaul/tml/equal_fwd.hpp>
#include <yaul/tml/is_same.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/end.hpp>
#include <yaul/tml/if.hpp>
#include <yaul/tml/apply.hpp>
#include <yaul/tml/deref.hpp>
#include <yaul/tml/next.hpp>

namespace yaul { namespace tml { namespace detail {
template <class First1, class First2, class Last1, class Last2, class Predicate>
  struct iter_equal_impl
    : if_<
        apply <
          Predicate
        , typename deref<First1>::type
        , typename deref<First2>::type
        >
      , iter_equal_impl<
          typename next<First1>::type
        , typename next<First2>::type
        , Last1
        , Last2
        , Predicate
        >
      , false_
      >::type
  { };
template <class Last1, class Last2, class Predicate>
  struct iter_equal_impl<Last1,Last2,Last1,Last2,Predicate>
    : true_
  { };
template <class First1, class Last2, class Last1, class Predicate>
  struct iter_equal_impl<First1,Last2,Last1,Last2,Predicate>
    : false_
  { };
template <class Last1, class First2, class Last2, class Predicate>
  struct iter_equal_impl<Last1,First2,Last1,Last2,Predicate>
    : false_
  { };
template <class Sequence1, class Sequence2, class Predicate>
  struct equal_impl
    : iter_equal_impl<
        typename begin<Sequence1>::type
      , typename begin<Sequence2>::type
      , typename end<Sequence1>::type
      , typename end<Sequence2>::type
      , Predicate
      >
  { };
} } } // end namespace yaul::tml::detail

namespace yaul { namespace tml {
/** // doc: equal {{{
 * \ingroup AlgoQueryGroup
 * \struct equal
 * \brief Compare sequences
 *
 * \tparam Sequence1 The first sequence to compare. \ref ForwardSeqConcept.
 * \tparam Sequence2 The second sequence to compare. \ref ForwardSeqConcept.
 * \tparam Predicate A comparison criterion. Binary \ref LambdaExprConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence1
 *      , class Sequence2
 *      , class Predicate = is_same<_1,_2>
 *      >
 *  struct equal
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns a true-valued \ref IntConstConcept if the two sequences `Sequence1`
 * and `Sequence2` are identical when compared element-by-element.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For eny \ref ForwardSeqConcept "Forward Sequences" `s1` and `s2` and a
 * binary \ref LambdaExprConcept `pred`:
 * \code
 *  typedef equal<s1,s2,pred>::type c;
 * \endcode
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: `c::value == true` if and only if `size<s1>::value ==
 *   size<s2>::value` and for every iterator `i` in `[begin<s1>::type,
 *   end<s1>::type)` `defer<i>::type` is identical to `advance<
 *   begin<s2>::type, distance<begin<s1>::type,i>::type>::type`.
 *
 * \par Example
 * \snippet yaul/tml/equal.cpp Code
 *
 */ // }}}
template <class Sequence1, class Sequence2, class Predicate>
  struct equal
    : detail::equal_impl<
          Sequence1
        , Sequence2
        , Predicate
      >
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_EQUAL_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
