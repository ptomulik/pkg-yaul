// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/plus.cpp {{{
 * \file yaul/tml/plus.cpp
 * \example yaul/tml/plus.cpp
 * \brief Usage example for \ref yaul::tml::plus
 */ // }}}

// [Code]
#include <yaul/tml/plus.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef plus<int_<1>, long_<2>, int_<3> >::type r;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r, long_<6> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
