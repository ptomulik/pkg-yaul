// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/all.hpp

/** // doc: yaul/tml/variadic/all.hpp {{{
 * \file yaul/tml/variadic/all.hpp
 * \brief Provides \ref yaul::tml::variadic::all
 */ // }}}
#ifndef YAUL_TML_VARIADIC_ALL_HPP
#define YAUL_TML_VARIADIC_ALL_HPP

#include <yaul/tml/variadic/all_fwd.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template <bool... Args>
  struct all_impl
    : false_
  { };
template <>
  struct all_impl<>
    : true_
  { };
template <bool... Tail>
  struct all_impl<true,Tail...>
    : all_impl<Tail...>
  { };
} } } } // end namespace yaul::tml::variadic::detail

namespace yaul { namespace tml { namespace variadic {
/** // doc: all {{{
 * \ingroup AlgoQueryVariadicGroup
 * \struct all
 * \brief Tests whether a predicate `F` holds for all the arguments from `Args`
 *
 * \tparam F Predicate. Unary \ref LambdaExprConcept.
 * \tparam Args Arguments to check. Any types.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class F>
 *    struct all
 *    {
 *      template<class... Args>
 *        struct apply
 *        {
 *          typedef unspecified type;
 *        };
 *    };
 *  }
 * \endcode
 *
 *
 * \par Description
 *
 * If the predicate `F` holds for all of the arguments from `Args...`, then
 * `variadic::all<F>::apply<Args...>::type` is `true_`. Otherwise it's
 * `false_`.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an unary \ref LambdaExprConcept `f` and all types `args...`
 * \code
 *  typedef variadic::all<f>::apply<args...>::type r;
 * \endcode
 *
 * - **Return type**: Boolean \ref IntConstConcept
 * - **Semantics**: `r` is a boolean \ref IntConstConcept with
 *   `r::value == true` if and only if for each type `ai` from `args...`
 *   `apply<f,ai>::type::value == true` holds.
 *
 * \code
 *  typedef variadic::all<f>::apply<> t;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `t` is a boolean \ref IntConstConcept with `r::value == true`
 *
 * \par Example
 * \snippet yaul/tml/variadic/all.cpp Code
 */ // }}}
template <class F>
  struct all;
template <class F>
  template <class... Args>
    struct all<F>::apply
      : detail::all_impl<yaul::tml::apply<F,Args>::type::value...>
    { };
} } } // end namespace yaul::tml::variadic

#include <yaul/tml/variadic/aux_/all.hpp>

#endif /* YAUL_TML_VARIADIC_ALL_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
