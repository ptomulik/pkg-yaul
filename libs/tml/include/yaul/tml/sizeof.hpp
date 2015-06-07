// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/sizeof.hpp

/** // doc: yaul/tml/sizeof.hpp {{{
 * \file yaul/tml/sizeof.hpp
 * \brief Provides \ref yaul::tml::sizeof_
 */ // }}}
#ifndef YAUL_TML_SIZEOF_HPP
#define YAUL_TML_SIZEOF_HPP

#include <yaul/tml/sizeof_fwd.hpp>
#include <yaul/tml/size_t.hpp>

namespace yaul { namespace tml {
/** // doc: sizeof {{{
 * \ingroup MetafunMiscGroup
 * \struct sizeof_
 * \brief  Returns the result of a `sizeof(X)` expression.
 *
 * \tparam X A type to compute the sizeof for.
 *
 * \par Synopsis
 *
 * \code
 *  template< class X >
 *  struct sizeof_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of a `sizeof(X)` expression wrapped into an
 * \ref IntConstConcept of the corresponding type, std::size_t.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary type `x`:
 * \code
 *  typedef sizeof_<x>::type n;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Precondition**: `x` is a complete type.
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef size_t_< sizeof(X) > n;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/sizeof.cpp Code
 *
 */ // }}}
template <class X>
  struct sizeof_
    : size_t_<sizeof(X)>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_SIZEOF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
