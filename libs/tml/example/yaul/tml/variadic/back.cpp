// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/back.cpp {{{
 * \file yaul/tml/variadic/back.cpp
 * \example yaul/tml/variadic/back.cpp
 * \brief Usage example for \ref yaul::tml::variadic::back
 */ // }}}

// [Code]
#include <yaul/tml/variadic/back.hpp>
#include <yaul/tml/int.hpp>

using namespace yaul::tml;

typedef variadic::back::apply<char>::type t1;
typedef variadic::back::apply<char, short, int, float>::type t4;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<t1,char>::value, "");
static_assert(is_same<t4,float>::value, "");

static_assert(variadic::back::apply<char,int,int_<2> >::value == 2, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
