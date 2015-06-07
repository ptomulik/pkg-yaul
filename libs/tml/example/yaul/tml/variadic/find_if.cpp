// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/find_if.cpp {{{
 * \file yaul/tml/variadic/find_if.cpp
 * \example yaul/tml/variadic/find_if.cpp
 * \brief Usage example for \ref yaul::tml::variadic::find_if
 */ // }}}

// [Code]
#include <yaul/tml/variadic/find_if.hpp>

using namespace yaul::tml;

#include <yaul/tml/greater.hpp>
#include <yaul/tml/placeholders.hpp>
#include <yaul/tml/int.hpp>

typedef greater<_1, int_<0> > positive;

static_assert(variadic::find_if<positive>::apply<>::value == 0l, "");
static_assert(variadic::find_if<positive>::apply<int_<1>, int_<0> >::value == 0l, "");
static_assert(variadic::find_if<positive>::apply<int_<0>, int_<1> >::value == 1l, "");
static_assert(variadic::find_if<positive>::apply<int_<-1>, int_<0> >::value == 2l, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
