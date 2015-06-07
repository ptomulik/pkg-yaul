// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/at.hpp

/** // doc: yaul/tml/variadic/at.hpp {{{
 * \file yaul/tml/variadic/at.hpp
 * \brief Provides \ref yaul::tml::variadic::at and \ref yaul::tml::variadic::at_c
 */ // }}}
#ifndef YAUL_TML_VARIADIC_AT_HPP
#define YAUL_TML_VARIADIC_AT_HPP

#include <yaul/tml/variadic/at_fwd.hpp>
#include <yaul/tml/long.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template <long N>
  struct at_impl;
} } } } // end namespace yaul::tml::variadic::detail

namespace yaul { namespace tml { namespace variadic {
/** // doc: at {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct at
 * \brief Returns N-th element from the beginning of an argument pack
 *
 * \tparam N An offset from the beginning of the arguments pack specifying the
 *           element to be retrieved. An \ref IntConstConcept.
 * \tparam Args Argument pack to retrieve the value from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<class N>
 *    struct at
 *    {
 *      template<class...Args>
 *      struct apply
 *      {
 *        typedef unspecified type;
 *      };
 *    };
 *  }
 * \endcode
 *
 * \par Description
 *
 * `variadic::at<N>::apply<Args...>` returns the N-th element from the
 * beginning of the argument pack `Args...` with a guaranteed O(1) complexity.
 *
 * \par Expression semantics
 *
 * For an \ref IntConstConcept `n` and any types `a0, ..., an, ...`
 * \code
 *  typedef variadic::at<n>::apply<a0,...,an,...>::type r;
 * \endcode
 *
 * - **Return type**: `an`
 * - **Semantics**: equivalent to
 *   \code
 *    typedef an r;
 *   \endcode
 *
 * \par Note
 *
 * The maximum supported value of `N` is limited by
 * \ref TML_LIMIT_VARIADIC_SIZE - 1.
 *
 * \par Example
 * \snippet yaul/tml/variadic/at.cpp Code
 *
 */ // }}}
template <class N>
  struct at;
template <class N>
  template <class...Args>
    struct at<N>::apply
      : detail::at_impl<static_cast<long>(N::value)>::template apply<Args...>
    { };
/** // doc: at_c {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct at_c
 * \brief Returns N-th element from the beginning of an argument pack
 *
 * \tparam N An offset from the beginning of the arguments pack specifying the
 *           element to be retrieved. An integral constan.
 * \tparam Args Argument pack to retrieve the value from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    template<long N>
 *    struct at_c
 *    {
 *      template<class...Args>
 *      struct apply
 *      {
 *        typedef unspecified type;
 *      };
 *    };
 *  }
 * \endcode
 *
 * \par Description
 *
 * `variadic::at_c<N>::apply<Args...>` returns the N-th element from the
 * beginning of the argument pack `Args...` with a guaranteed O(1) complexity.
 *
 * \par Expression semantics
 *
 * For an integral constant `n` and any types `a0, ..., an, ...`
 * \code
 *  typedef variadic::at_c<n>::apply<a0,...,an,...>::type r;
 * \endcode
 *
 * - **Return type**: `an`
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef variadic::at<long_<n> >::apply<a0,...,an,...>::type r;
 *   \endcode
 *
 * \par Note
 *
 * The maximum supported value of `N` is limited by
 * \ref TML_LIMIT_VARIADIC_SIZE - 1.
 *
 * \par Example
 * \snippet yaul/tml/variadic/at.cpp Code
 *
 */ // }}}
template <long N>
  struct at_c;
template <long N>
  template <class...Args>
    struct at_c<N>::apply
      : at<long_<N> >::template apply<Args...>
    { };
} } } // end namespace yaul::tml::variadic

#include <yaul/tml/variadic/aux_/at.hpp>

#endif /* YAUL_TML_VARIADIC_AT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
