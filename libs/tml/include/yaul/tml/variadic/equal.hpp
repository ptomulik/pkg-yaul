// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/equal.hpp

/** // doc: yaul/tml/variadic/equal.hpp {{{
 * \file yaul/tml/variadic/equal.hpp
 * \brief Provides \ref yaul::tml::variadic::equal
 */ // }}}
#ifndef YAUL_TML_VARIADIC_EQUAL_HPP
#define YAUL_TML_VARIADIC_EQUAL_HPP

#include <yaul/tml/variadic/equal_fwd.hpp>
#include <yaul/tml/if.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: equal {{{
 * \ingroup AlgoQueryVariadicGroup
 * \struct equal
 * \brief Tests if two sequences are equal
 *
 * \tparam Pred A comparison criterion. Binary \ref LambdaExprConcept
 * \tparam Args1 First argument pack to compare.
 * \tparam Args2 Second argument pack to compare.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template< class Pred, class... Args1 >
 *      struct equal
 *      {
 *        template< class... Args2 >
 *          struct apply
 *          {
 *            typedef unspecified type;
 *          };
 *      };
 *    }
 * \endcode
 *
 * \par Description
 *
 * Returns a true-valued \ref IntConstConcept if the two argument packs
 * `Args1...` and `Args2...` are identical when compared element-by-element.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any arguments `args1...` and `args2...` and a binary
 * \ref LambdaExprConcept `pred`:
 *
 * \code
 *  typedef variadic::equal< pred, args1...>::apply<args2...>::type c;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `c::value == true` if and only if `sizeof...(args1) ==
 *   sizeof...(args2)` and forevery `a1i` in `args1...` and `a2i` in `args2...`
 *   it holds `apply<pred,a1i,a2i>::type::value == true`.
 *
 * \par Example
 * \snippet yaul/tml/variadic/equal.cpp Code
 *
 */ // }}}
template <class Pred, class... Args1>
  struct equal;
template <class Pred, class Head1, class... Tail1>
  struct equal<Pred,Head1,Tail1...>
  {
    template <class... Args2>
      struct apply
        : false_
      { };
    template <class Head2, class... Tail2>
      struct apply<Head2,Tail2...>
        : if_<
            typename yaul::tml::apply<Pred,Head1,Head2>::type
          , typename equal<Pred, Tail1...>::template apply<Tail2...>
          , false_
          >::type
      { };
  };
template <class Pred>
    struct equal<Pred>
    {
      template <class... Args2>
        struct apply
          : if_c<(sizeof...(Args2) == 0), true_, false_>::type
        { };
    };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_EQUAL_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
