// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/find.hpp

/** // doc: yaul/tml/variadic/find.hpp {{{
 * \file yaul/tml/variadic/find.hpp
 * \todo Write documentation
 */ // }}}
#ifndef YAUL_TML_VARIADIC_FIND_HPP
#define YAUL_TML_VARIADIC_FIND_HPP

#include <yaul/tml/variadic/find_fwd.hpp>
#include <yaul/tml/variadic/find_if.hpp>
#include <yaul/tml/same_as.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: find {{{
 * \ingroup AlgoQueryVariadicGroup
 * \struct find
 * \brief Returns an index of the first occurrence of type ``T`` in an
 *        argument pack ``Args``
 *
 * \tparam T any type, a type to search for,
 * \tparam Args an argument pack to search in.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template< class T >
 *      struct find
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
 * ``variadic::find<t>::::apply<a0 ... a{n-1}>::::type`` returns an
 * \ref IntConstConcept equal to the index in range ``[0, n)`` of the first
 * occurrence of type ``t`` in the argument pack ``a0 ... a{n-1}`` or ``n``, if
 * no such element exist in the argument pack.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any type ``t`` and types ``a0 ... a{n-1}``
 *
 * \code
 *  typedef variadic::find< t >::apply<a0,...a{n-1}>::type i;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: equivalent to
 *   ``typedef variadic::find_if<is_same<t,_> >::::type i;``
 *
 * \par Example
 * \snippet yaul/tml/variadic/find.cpp Code
 *
 */ // }}}
template <class T>
  struct find;
template <class T>
  template <class... Args>
    struct find<T>::apply
      : find_if<yaul::tml::same_as<T> >::template apply<Args...>
    { };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_FIND_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
