// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/is_placeholder.hpp

/** // doc: yaul/tml/is_placeholder.hpp {{{
 * \file yaul/tml/is_placeholder.hpp
 * \brief Provides \ref yaul::tml::is_placeholder
 */ // }}}
#ifndef YAUL_TML_IS_PLACEHOLDER_HPP
#define YAUL_TML_IS_PLACEHOLDER_HPP

#include <yaul/tml/is_placeholder_fwd.hpp>
#include <yaul/tml/arg_fwd.hpp>
#include <yaul/tml/bool.hpp>

namespace yaul { namespace tml {
/** // doc: is_placeholder {{{
 * \ingroup MetafunMiscGroup
 * \struct is_placeholder
 * \brief Tests if a type is a placeholder
 *
 * \tparam T The type to check. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      >
 *  struct is_placeholder
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Tests if `T` is a placeholder. Returns an \ref IntConstConcept which equals
 * `true` if and only if `T` is a placeholder.
 *
 * \par Expression semantics
 *
 * For any type `t`
 * \code
 *  typedef is_placeholder<T>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is an \ref IntConstConcept which equals `true` if `T`
 *   is a placeholder or `false` otherwise.
 *
 * \par Example
 * \snippet yaul/tml/is_placeholder.cpp Code
 */ // }}}
template <class T>
  struct is_placeholder
    : bool_<false>
  { };
template <int n>
  struct is_placeholder<arg<n> >
    : bool_<true>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_IS_PLACEHOLDER_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
