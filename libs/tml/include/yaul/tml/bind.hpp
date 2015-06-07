// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/bind.hpp

/** // doc: yaul/tml/bind.hpp {{{
 * \file yaul/tml/bind.hpp
 * \brief Provides \ref yaul::tml::bind
 */ // }}}
#ifndef YAUL_TML_BIND_HPP
#define YAUL_TML_BIND_HPP

#include <yaul/tml/bind_fwd.hpp>
#include <yaul/tml/apply_wrap.hpp>
#include <yaul/tml/is_bind_expr.hpp>
#include <yaul/tml/is_placeholder.hpp>
#include <yaul/tml/if.hpp>
#include <yaul/tml/or.hpp>
#include <yaul/tml/identity.hpp>

namespace yaul { namespace tml {
/** // doc: bind {{{
 * \ingroup MetafunComposeBindGroup
 * \struct bind
 * \brief Bind arguments to a metafunction class
 *
 * \tparam F A \ref MetafunClassConcept to perform binding on.
 * \tparam Args Arguments to bind. Any types.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F
 *      , class... Args
 *      >
 *  struct bind
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * ``bind`` is a higher-order primitive for \ref MetafunClassConcept
 * composition and argument binding. In essence, it's a compile-time
 * counterpart of the similar run-time functionality provided by
 * [Boost.Bind](http://www.boost.org/libs/bind/bind.html) and
 * [Boost.Lambda](http://www.boost.org/libs/lambda/index.html).
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any \ref MetafunClassConcept `f` and arbitrary types `args...`:
 * \code
 * typedef bind<f,args...> g;
 * \endcode
 *
 * - **Return type**: \ref MetafunClassConcept
 * - **Semantics**: Equivalent to:
 *   \code
 *    struct g
 *    {
 *      template<class... Us>
 *      struct apply
 *        : apply_wrap<
 *              typename h<f,Us...>::type
 *            , typename h<args,Us...>::type...
 *            >
 *      {
 *      };
 *    };
 *   \endcode
 *   where `h<X,Us...>` is equivalent to
 *   \code
 *    apply_wrap<X,Us...>
 *   \endcode
 *
 *   if `X` is a bind expression or a placeholder, and
 *   \code
 *    identity<X>
 *   \endcode
 *
 *   otherwise.
 *
 * \par Example
 * \snippet yaul/tml/bind.cpp Code
 */ // }}}
template <class F, class... Args>
  struct bind
  {
  private:
    template <class A, class... Us>
      using h = typename if_<
        typename or_<
            typename is_bind_expr<A>::type
          , typename is_placeholder<A>::type
        >::type
      , apply_wrap<A, Us...>
      , identity<A>
      >::type;
  public:
    template<class... Us>
      struct apply
        : apply_wrap<
            typename h<F, Us...>::type
          , typename h<Args, Us...>::type...
          >
    { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_BIND_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
