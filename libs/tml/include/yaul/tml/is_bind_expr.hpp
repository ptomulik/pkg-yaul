// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/is_bind_expr.hpp

/** // doc: yaul/tml/is_bind_expr.hpp {{{
 * \file yaul/tml/is_bind_expr.hpp
 * \brief Provides \ref yaul::tml::is_bind_expr
 */ // }}}
#ifndef YAUL_TML_IS_BIND_EXPR_HPP
#define YAUL_TML_IS_BIND_EXPR_HPP

#include <yaul/tml/is_bind_expr_fwd.hpp>
#include <yaul/tml/bind_fwd.hpp>
#include <yaul/tml/quote_fwd.hpp>
#include <yaul/tml/bool.hpp>

namespace yaul { namespace tml {
/** // doc: is_bind_expr {{{
 * \ingroup MetafunMiscGroup
 * \struct is_bind_expr
 * \brief Tests if a type is a bind expression
 *
 * \tparam F A type to be checked. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      >
 *  struct is_bind_expr
 *  {
 *    typedef unspecified type;
 *  };
 *
 * \endcode
 *
 * \par Description
 *
 * Tests if `F` is a bind expression. Returns boolean \ref IntConstConcept,
 * which equals `true` if and only if `F` is a bind expression.
 *
 * \par Expression semantics
 *
 * For any type `f`
 * \code
 *  typedef is_bind_expr<f>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is an \ref IntConstConcept which equals `true` if `f`
 *   is a bind expression, or `false` otherwise.
 *
 * \par Example
 * \snippet yaul/tml/is_bind_expr.cpp Code
 *
 */ // }}}
template <class F>
  struct is_bind_expr
    : false_
  { };
template <class F, class... Args>
  struct is_bind_expr<bind<F,Args...> >
    : true_
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_IS_BIND_EXPR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
