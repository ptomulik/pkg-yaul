// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/long.hpp

/** // doc: yaul/tml/long.hpp {{{
 * \file yaul/tml/long.hpp
 * \brief Provides \ref yaul::tml::long_
 */ // }}}
#ifndef YAUL_TML_LONG_HPP
#define YAUL_TML_LONG_HPP

#include <yaul/tml/long_fwd.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml {
/** // doc: long_ {{{
 * \ingroup TypesNumericGroup
 * \brief An \ref IntConstConcept wrapper for long
 *
 * \tparam C A value to wrap. A long integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        long C
 *      >
 *  struct long_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A long \ref IntConstConcept wrapper.
 *
 * \par Model of
 *
 * \ref IntConstConcept.
 *
 * \par Expression semantics
 *
 *  The semantics of an expression are defined only where they differ from, or
 *  are not defined in \ref IntConstConcept.
 *
 *  For arbitary integral constant c:
 *  \code
 *    long_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to long.
 *
 * \par Example
 * \snippet yaul/tml/long.cpp Code
 */ // }}}
template <long l>
  using long_ = integral_c<long, l>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_LONG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
