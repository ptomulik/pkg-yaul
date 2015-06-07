// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/times.cpp {{{
 * \file yaul/tml/times.cpp
 * \example yaul/tml/times.cpp
 * \brief Usage example for \ref yaul::tml::times
 */ // }}}

// [Code]
#include <yaul/tml/times.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef times<int_<2>, long_<3>, int_<4> >::type r;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r, long_<24> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
