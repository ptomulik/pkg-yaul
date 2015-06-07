// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/shift_right.hpp

/** // doc: yaul/tml/shift_right.hpp {{{
 * \file yaul/tml/shift_right.hpp
 * \brief Provides \ref yaul::tml::shift_right
 */ // }}}
#ifndef YAUL_TML_SHIFT_RIGHT_HPP
#define YAUL_TML_SHIFT_RIGHT_HPP

#include <yaul/tml/shift_right_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: shift_right {{{
 * \ingroup MetafunBitOpsGroup
 * \struct shift_right
 * \brief Bitwise shift right
 *
 * \tparam T A value to shift. \ref IntConstConcept.
 * \tparam Shift A shift distance. Unsigned \ref IntConstConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      , class Shift
 *      >
 *  struct shift_right
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of bitwise shift right (>>) operation on `T`.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary \ref IntConstConcept `c` and unsigned \ref IntConstConcept
 * `shift`
 * \code
 *  typedef shift_right<c,shift>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef integral_c<
 *          decltype(c::value >> shift::value)
 *        , (c::value >> shift::value)
 *        > c;
 *   \endcode
 *
 * \code
 *  typedef shift_right<c,shift> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : shift_right<c,shift>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/shift_right.cpp Code
 *
 */ // }}}
template <class T, class Shift>
  struct shift_right
    : shift_right_impl<
        typename numeric_tag<T>::type
      , typename numeric_tag<Shift>::type
      >::template apply<T,Shift>
  {
  };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/shift_right.hpp>

#endif /* YAUL_TML_SHIFT_RIGHT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
