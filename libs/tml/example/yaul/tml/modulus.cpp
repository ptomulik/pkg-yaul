// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/modulus.cpp {{{
 * \file yaul/tml/modulus.cpp
 * \example yaul/tml/modulus.cpp
 * \brief Usage example for \ref yaul::tml::modulus
 */ // }}}

// [Code]
#include <yaul/tml/modulus.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef modulus<int_<24>, long_<5> >::type r;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r, long_<4> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
