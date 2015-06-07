// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/integral_c_tag.hpp

/** // doc: yaul/tml/integral_c_tag.hpp {{{
 * \file yaul/tml/integral_c_tag.hpp
 * \brief Defines \ref yaul::tml::integral_c_tag
 */ // }}}
#ifndef YAUL_TML_INTEGRAL_C_TAG_HPP
#define YAUL_TML_INTEGRAL_C_TAG_HPP

namespace yaul { namespace tml {
/** // doc: integral_c_tag {{{
 * \struct integral_c_tag
 * \brief A tag for integral numbers.
 */ // }}}
struct integral_c_tag
{
  static constexpr int value = 0;
};
} } // end namespace yaul::tml

#endif /* YAUL_TML_INTEGRAL_C_TAG_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
