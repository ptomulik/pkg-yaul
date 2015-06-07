// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/equal.cpp {{{
 * \file yaul/tml/variadic/equal.cpp
 * \example yaul/tml/variadic/equal.cpp
 * \brief Usage example for \ref yaul::tml::variadic::equal
 */ // }}}

// [Code]
#include <yaul/tml/variadic/equal.hpp>
#include <yaul/tml/is_same.hpp>
#include <yaul/tml/placeholders.hpp>

using namespace yaul::tml;

typedef is_same<_1,_2> pred;

static_assert( variadic::equal<pred>::apply<>::value, "");
static_assert( variadic::equal<pred,int>::apply<int>::value, "");
static_assert( variadic::equal<pred,int,char>::apply<int,char>::value, "");

// different content
static_assert(!variadic::equal<pred,int>::apply<char>::value, "");
static_assert(!variadic::equal<pred,int,char>::apply<char,int>::value, "");

// different size
static_assert(!variadic::equal<pred>::apply<char>::value, "");
static_assert(!variadic::equal<pred,int>::apply<>::value, "");
static_assert(!variadic::equal<pred,int,char>::apply<int>::value, "");
static_assert(!variadic::equal<pred,int>::apply<int,char>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
