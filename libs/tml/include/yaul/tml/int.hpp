// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/int.hpp

/** // doc: yaul/tml/int.hpp {{{
 * \file yaul/tml/int.hpp
 * \brief Provides \ref yaul::tml::int_
 */ // }}}
#ifndef YAUL_TML_INT_HPP
#define YAUL_TML_INT_HPP

#include <yaul/tml/int_fwd.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml {
/** // doc: int_ {{{
 * \ingroup TypesNumericGroup
 * \brief An \ref IntConstConcept wrapper for int
 *
 * \tparam C A value to wrap. A int integral constant.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        int C
 *      >
 *  struct int_
 *  {
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * A int \ref IntConstConcept wrapper.
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
 *    int_<c>
 *  \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: An \ref IntConstConcept `x` such that `x::value = c` and
 *   `x::value_type` is identical to int.
 *
 * \par Example
 * \snippet yaul/tml/int.cpp Code
 */ // }}}
template <int t>
  using int_ = integral_c<int, t>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_INT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
