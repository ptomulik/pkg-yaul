// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/distance.cpp {{{
 * \file yaul/tml/distance.cpp
 * \example yaul/tml/distance.cpp
 * \brief Usage example for \ref yaul::tml::class
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/distance.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/end.hpp>

using namespace yaul::tml;

typedef sequence<char,short,int,float> s1;
typedef begin<s1>::type b1;
typedef end<s1>::type e1;

static_assert(distance<b1,e1>::value == 4, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
