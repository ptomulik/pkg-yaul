// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/find.cpp {{{
 * \file yaul/tml/variadic/find.cpp
 * \example yaul/tml/variadic/find.cpp
 * \brief Usage example for \ref yaul::tml::variadic::find
 */ // }}}

// [Code]
#include <yaul/tml/variadic/find.hpp>

using namespace yaul::tml;

static_assert(variadic::find<int>::apply<>::value == 0l, "");
static_assert(variadic::find<int>::apply<int, char>::value == 0l, "");
static_assert(variadic::find<int>::apply<char, int>::value == 1l, "");
static_assert(variadic::find<double>::apply<char, double, int, double>::value == 1l, "");
static_assert(variadic::find<void>::apply<char, double, int>::value == 3l, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
