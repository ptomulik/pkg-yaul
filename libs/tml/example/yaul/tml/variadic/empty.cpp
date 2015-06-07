// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/empty.cpp {{{
 * \file yaul/tml/variadic/empty.cpp
 * \example yaul/tml/variadic/empty.cpp
 * \brief Usage example for \ref yaul::tml::class
 */ // }}}

// [Code]
#include <yaul/tml/variadic/empty.hpp>

using namespace yaul::tml;

static_assert(variadic::empty::apply<>::value == true, "");
static_assert(variadic::empty::apply<char>::value == false, "");
static_assert(variadic::empty::apply<char,short,int,float>::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
