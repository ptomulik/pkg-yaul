// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/unpack_args.hpp

/** // doc: yaul/tml/unpack_args.hpp {{{
 * \file yaul/tml/unpack_args.hpp
 * \brief Provides \ref yaul::tml::unpack_args
 */ // }}}
#ifndef YAUL_TML_UNPACK_ARGS_HPP
#define YAUL_TML_UNPACK_ARGS_HPP

#include <yaul/tml/unpack_args_fwd.hpp>
#include <yaul/tml/apply_sequence.hpp>

namespace yaul { namespace tml {
/** // doc: unpack_args {{{
 * \ingroup MetafunInvocationGroup
 * \struct unpack_args
 * \brief Transform n-ary \ref LambdaExprConcept into an unary
 *        \ref MetafunClassConcept accepting a single sequence of *n* elements
 *
 * \tparam F A lambda expression o adopt. \ref LambdaExprConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class F >
 *  struct unpack_args
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A higher-order primitive transforming an n-ary \ref LambdaExprConcept into
 * an unary \ref MetafunClassConcept `g` accepting a single sequence of *n*
 * arguments.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary \ref LambdaExprConcept `f`, and arbitrary types `a1,...an`,
 * and template `x` such that `x<a1,...an>` is a \ref TemplateSeqConcept
 * \code
 *  typedef unpack_args<f> g;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept
 * - **Semantics**: `g` is a unary \ref MetafunClassConcept such that
 *   \code
 *    apply_wrap< g, x<a1,...an> >::type
 *   \endcode
 *   is identical to
 *   \code
 *    apply<F,a1,...an>::type
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/unpack_args.cpp Code
 *
 */ // }}}
template <class F>
  struct unpack_args;
template <class F>
  template <class Sequence>
    struct unpack_args<F>::apply
      : apply_sequence<F,Sequence>
    { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_UNPACK_ARGS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
