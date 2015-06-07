// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/back.hpp

/** // doc: yaul/tml/variadic/back.hpp {{{
 * \file yaul/tml/variadic/back.hpp
 * \brief Provides \ref yaul::tml::variadic::back
 */ // }}}
#ifndef YAUL_TML_VARIADIC_BACK_HPP
#define YAUL_TML_VARIADIC_BACK_HPP

#include <yaul/tml/variadic/back_fwd.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: back {{{
 * \ingroup SeqIntrVariadicGroup
 * \struct back
 * \brief Returns the last argument from variadic argument pack
 *
 * \tparam Args Arguments to retrieve the last element from.
 *
 * \par Synopsis
 *
 * \code
 *  namespace variadic {
 *    struct back
 *    {
 *      template <class... Args>
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
 * variadic::back returns the element from the end of the variadic
 * argument pack `Args...` with guaranted O(1) complexity.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For an any types `a1, ... an`
 * \code
 *  typedef variadic::back::apply<a1,...,an>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified type
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef an r;
 *   \endcode
 *
 * \par Note
 *
 * The maximum supported number of arguments in `Args...` is limited by
 * \ref TML_LIMIT_VARIADIC_SIZE.
 *
 * \par Example
 * \snippet yaul/tml/variadic/back.cpp Code
 *
 */ // }}}
struct back;
} } } // end namespace yaul::tml

#include <yaul/tml/variadic/aux_/back.hpp>

#endif /* YAUL_TML_VARIADIC_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
