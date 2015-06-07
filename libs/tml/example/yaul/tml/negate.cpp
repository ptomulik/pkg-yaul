// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/negate.cpp {{{
 * \file yaul/tml/negate.cpp
 * \example yaul/tml/negate.cpp
 * \brief Usage example for \ref yaul::tml::negate
 */ // }}}

// [Code]
#include <yaul/tml/negate.hpp>
#include <yaul/tml/int.hpp>

using namespace yaul::tml;

typedef negate<int_<4> >::type r;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r, int_<-4> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
