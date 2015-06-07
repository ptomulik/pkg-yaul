// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/numeric_cast.hpp

/** // doc: yaul/tml/numeric_cast.hpp {{{
 * \file yaul/tml/numeric_cast.hpp
 * \brief Provides \ref yaul::tml::numeric_cast
 */ // }}}
#ifndef YAUL_TML_NUMERIC_CAST_HPP
#define YAUL_TML_NUMERIC_CAST_HPP

#include <yaul/tml/numeric_cast_fwd.hpp>

namespace yaul { namespace tml {
/** // doc: numeric_cast {{{
 * \ingroup MetafunMiscGroup
 * \struct numeric_cast
 * \brief Conversions between numeric types.
 *
 * \tparam FromTag A tag for the conversion's source type.
 * \tparam ToTag A tag for the conversion's destination type.
 *
 * \par Synopsis
 *
 * \code
 *  template< class FromTag, class ToTAg >
 *  struct numeric_cast;
 * \endcode
 *
 * \par Description
 *
 * Each `numeric_cast` specialization is a user-specialized unary
 * \ref MetafunClassConcept providing a conversion between two numeric types.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * If `x` and `y` are two numeric types, `x` is convertible to `y`, and
 * `x_tag` and `y_tag` are the types' corresponding numeric tags:
 * \code
 *  typedef apply_wrap< numeric_cast<x_tag,y_tag>, x >::type r;
 * \endcode
 *
 * - **Return type**: A type.
 * - **Semantics**: `r` is a value of `x` converted to the type of `y`.
 *
 * \par Example
 * \snippet yaul/tml/numeric_cast.cpp Code
 *
 */ // }}}
template <class FromTag, class ToTag>
  struct numeric_cast;
} } // end namespace yaul::tml

#endif /* YAUL_TML_NUMERIC_CAST_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
