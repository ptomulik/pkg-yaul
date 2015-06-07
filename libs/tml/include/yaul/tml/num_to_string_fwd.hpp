// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/num_to_string_fwd.hpp

/** // doc: yaul/tml/num_to_string_fwd.hpp {{{
 * \file yaul/tml/num_to_string_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/num_to_string.hpp
 */ // }}}
#ifndef YAUL_TML_NUM_TO_STRING_FWD_HPP
#define YAUL_TML_NUM_TO_STRING_FWD_HPP

namespace yaul { namespace tml {
template <class Value, class CharT = char, unsigned int Base = 10>
  struct num_to_string;
template <class T, T Value, class CharT = char, unsigned int Base = 10>
  struct num_to_string_c;
template <short Value, class CharT = char, unsigned int Base = 10>
  struct short_to_string;
template <int Value, class CharT = char, unsigned int Base = 10>
  struct int_to_string;
template <long Value, class CharT = char, unsigned int Base = 10>
  struct long_to_string;
} } // end namespace yaul::tml

#endif /* YAUL_TML_NUM_TO_STRING_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
