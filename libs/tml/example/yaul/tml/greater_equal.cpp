// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/greater_equal.cpp {{{
 * \file yaul/tml/greater_equal.cpp
 * \example yaul/tml/greater_equal.cpp
 * \brief Usage example for \ref yaul::tml::greater_equal
 */ // }}}

// [Code]
#include <yaul/tml/greater_equal.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef greater_equal<int_<24>, long_<5> >::type r1;
typedef greater_equal<int_<5>, long_<24> >::type r2;
typedef greater_equal<int_<6>, int_<6> >::type r3;

static_assert(r1::value == true, "");
static_assert(r2::value == false, "");
static_assert(r3::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
