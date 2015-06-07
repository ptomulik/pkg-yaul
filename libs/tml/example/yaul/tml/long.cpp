// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/long.cpp {{{
 * \file yaul/tml/long.cpp
 * \example yaul/tml/long.cpp
 * \brief Usage example for \ref yaul::tml::long_
 */ // }}}

// [Code]
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef long_<8l> eight;

#include <yaul/tml/is_same.hpp>
static_assert( is_same<eight::value_type, long>::value, "");
static_assert( is_same<eight::type, eight>::value, "");
static_assert( eight::value == 8l, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
