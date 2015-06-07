// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/protect.hpp

/** // doc: yaul/tml/protect.hpp {{{
 * \file yaul/tml/protect.hpp
 * \brief Provides \ref yaul::tml::protect
 */ // }}}
#ifndef YAUL_TML_PROTECT_HPP
#define YAUL_TML_PROTECT_HPP

#include <yaul/tml/protect_fwd.hpp>
#include <yaul/tml/is_bind_expr.hpp>
#include <yaul/tml/apply_wrap.hpp>
#include <yaul/tml/if.hpp>

namespace yaul { namespace tml { namespace detail {
template <class F>
  struct do_protect
  {
    template <class... Us>
      struct apply
        : apply_wrap<F,Us...>
      {
      };
  };
} } } // end namespace yaul::tml::detail

namespace yaul { namespace tml {
/** // doc: protect {{{
 * \ingroup MetafunComposeBindGroup
 * \struct protect
 * \brief Prevents a \ref MetafunClassConcept from being recognized as a bind
 *        expression
 *
 * \tparam F A \ref MetafunClassConcept to wrap.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      >
 *  struct protect
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * `protect` is an identity wrapper for a \ref MetafunClassConcept that
 * prevents its argument from being recognized as a bind expression.
 *
 * \par Expression semantics
 *
 * For any \ref MetafunClassConcept `f`:
 *
 * \code
 *  typedef protect<f> g;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept.
 * - **Semantics**: If `f` is  a bind expression, equivalent to
 *   \code
 *    struct g
 *    {
 *      template< class... Us >
 *        struct apply
 *          : apply_wrap<f, Us...>
 *        {
 *        };
 *    };
 *   \endcode
 *
 *   otherwise equivalent to `typedef f g;`.
 *
 * \par Example
 * \snippet yaul/tml/protect.cpp Code
 */ // }}}
template <class F>
  struct protect
    : if_<typename is_bind_expr<F>::type, detail::do_protect<F>, F>::type
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_PROTECT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
