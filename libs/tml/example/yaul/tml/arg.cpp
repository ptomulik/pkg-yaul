// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/arg.cpp {{{
 * \file yaul/tml/arg.cpp
 * \example yaul/tml/arg.cpp
 * \brief Usage example for \ref yaul::tml::arg
 */ // }}}

// [Code]
#include <yaul/tml/arg.hpp>
#include <yaul/tml/is_same.hpp>

using namespace yaul::tml;
static_assert(is_same<arg<1>::apply<int,char,void>::type, int>::value, "");
static_assert(is_same<arg<2>::apply<int,char,void>::type, char>::value, "");
static_assert(is_same<arg<3>::apply<int,char,void>::type, void>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
