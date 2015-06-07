// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/not_equal_to.cpp {{{
 * \file yaul/tml/not_equal_to.cpp
 * \example yaul/tml/not_equal_to.cpp
 * \brief Usage example for \ref yaul::tml::not_equal_to
 */ // }}}

// [Code]
#include <yaul/tml/not_equal_to.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef not_equal_to<int_<24>, int_<5> >::type r1;
typedef not_equal_to<int_<6>, long_<6> >::type r2;

static_assert(r1::value == true , "");
static_assert(r2::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
