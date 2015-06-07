// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/find_if.hpp

/** // doc: yaul/tml/variadic/find_if.hpp {{{
 * \file yaul/tml/variadic/find_if.hpp
 * \todo Write documentation
 */ // }}}
#ifndef YAUL_TML_VARIADIC_FIND_IF_HPP
#define YAUL_TML_VARIADIC_FIND_IF_HPP

#include <yaul/tml/variadic/find_if_fwd.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<class Pred>
  struct find_if_impl;
} } } } // end namespace yaul::tml::variadic::detail

namespace yaul { namespace tml { namespace variadic {
/** // doc: find_if {{{
 * \ingroup AlgoQueryVariadicGroup
 * \struct find_if
 * \brief Returns an index of the first element in `Args` that satisfies
 *        predicate `Pred`
 *
 * \tparam Pred Unary \ref LambdaExprConcept, a search condition
 * \tparam Args List of arguments to be examied with `Pred`
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template< class Pred >
 *      struct find_if
 *      {
 *        template< class... Args >
 *          struct apply
 *          {
 *            typedef unspecified type;
 *          };
 *      };
 * }
 * \endcode
 *
 * \par Description
 *
 * <tt>variadic::find_if<Pred>::apply<Args...>::type</tt> returns an
 * \ref IntConstConcept which is an index of first element in `Args...`
 * satisfying the predicate `Pred`. If there is no such element in `Args...`,
 * then an \ref IntConstConcept equal to `sizeof...(Args)` is returned.
 * Especially, if the argument pack `Args...` is empty, zero is returned.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For a unary \ref LambdaExprConcept `Pred` and any types `a0 ... a{n-1}`
 * \code
 *  typedef find_if< Pred >::apply<a0 ... a{n-1}>::type i;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `i` is an \ref IntConstConcept equal to the index in range
 *   `[0, n)` of the first element `ai` such that
 *   <tt>apply<Pred, ai>::type::value == true</tt>. If no such element is
 *   found, then <tt>i::value == n</tt>.
 *
 * \par Example
 * \snippet yaul/tml/variadic/find_if.cpp Code
 *
 */ // }}}
template <class Pred>
  struct find_if;
template <class Pred>
  template <class... Args>
    struct find_if<Pred>::apply
      : detail::find_if_impl<Pred>::template apply<0l,Args...>
    { };
} } } // end namespace yaul::tml::variadic

#include <yaul/tml/variadic/aux_/find_if.hpp>

#endif /* YAUL_TML_VARIADIC_FIND_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
