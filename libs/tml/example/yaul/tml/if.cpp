// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/if.cpp {{{
 * \file yaul/tml/if.cpp
 * \example yaul/tml/if.cpp
 * \brief Usage example for \ref yaul::tml::if_
 */ // }}}

// [Code]
#include <yaul/tml/if.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/is_same.hpp>

using namespace yaul::tml;
static_assert(is_same<if_<true_,char,long>::type, char>::value, "");
static_assert(is_same<if_<false_,char,long>::type, long>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
