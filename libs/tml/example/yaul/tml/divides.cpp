// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/divides.cpp {{{
 * \file yaul/tml/divides.cpp
 * \example yaul/tml/divides.cpp
 * \brief Usage example for \ref yaul::tml::divides
 */ // }}}

// [Code]
#include <yaul/tml/divides.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef divides<int_<24>, long_<6>, int_<2> >::type r;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r, long_<2> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
