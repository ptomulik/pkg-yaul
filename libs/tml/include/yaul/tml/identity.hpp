// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/identity.hpp

/** // doc: yaul/tml/identity.hpp {{{
 * \file yaul/tml/identity.hpp
 * \brief Provides \ref yaul::tml::identity
 */ // }}}
#ifndef YAUL_TML_IDENTITY_HPP
#define YAUL_TML_IDENTITY_HPP

#include <yaul/tml/identity_fwd.hpp>

namespace yaul { namespace tml {
/** // doc: identity {{{
 * \ingroup MetafunMiscGroup
 * \struct identity
 * \brief The identity metafunction
 *
 * \tparam T An argument to be returned. Any type.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      >
 *  struct identity
 *  {
 *    typedef T type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * The identity metafunction. Returns `T` unchanged.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary type `t`
 * \code
 *  typedef identity<t>::type r;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef x r;
 *   \endcode
 * - **Postcondition**: `is_same<r,x>::value == true`.
 *
 * \par Example
 * \snippet yaul/tml/identity.cpp Code
 */ // }}}
template <class T>
  struct identity
  {
    typedef T type;
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_IDENTITY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
