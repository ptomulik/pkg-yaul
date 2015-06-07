// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/negate.hpp

/** // doc: yaul/tml/negate.hpp {{{
 * \file yaul/tml/negate.hpp
 * \brief Provides \ref yaul::tml::negate
 */ // }}}
#ifndef YAUL_TML_NEGATE_HPP
#define YAUL_TML_NEGATE_HPP

#include <yaul/tml/negate_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: negate {{{
 * \ingroup MetafunArithmeticOpsGroup
 * \struct negate
 * \brief Returns the negative (additive inverse) of its argument.
 *
 * \tparam T Operation's argument.
 *
 * \par Synopsis
 *
 * \code
 *  template< class T >
 *  struct negate
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the negative (additive inverse) of its argument.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref IntConstConcept `c`:
 * \code
 *  typedef negate<c>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef integral_c<c::value_type, ( -c::value ) > r;
 *   \endcode
 *
 * \code
 *  typedef negate<c> r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : negate<c>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/negate.cpp Code
 *
 */ // }}}
template <class C>
  struct negate
    : negate_impl<typename numeric_tag<C>::type>
        ::template apply<C>
  { };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/negate.hpp>

#endif /* YAUL_TML_NEGATE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
