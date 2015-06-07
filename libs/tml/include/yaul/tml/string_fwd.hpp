// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/string_fwd.hpp

/** // doc: yaul/tml/string_fwd.hpp {{{
 * \file yaul/tml/string_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/string.hpp
 */ // }}}
#ifndef YAUL_TML_STRING_FWD_HPP
#define YAUL_TML_STRING_FWD_HPP

#include <yaul/tml/sequence_fwd.hpp>
#include <cwchar>

namespace yaul { namespace tml {
template <class CharT, CharT... Chars>
  using basic_string = sequence_c<CharT,Chars...>;
template <char... Chars>
  using string = basic_string<char,Chars...>;
template <wchar_t... Chars>
  using wstring = basic_string<wchar_t,Chars...>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_STRING_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
