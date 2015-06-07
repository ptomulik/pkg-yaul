// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/find.cpp {{{
 * \file yaul/tml/find.cpp
 * \example yaul/tml/find.cpp
 * \brief Usage example for \ref yaul::tml::find
 */ // }}}

// [Code]
#include <yaul/tml/find.hpp>
#include <yaul/tml/sequence.hpp>

using namespace yaul::tml;

struct s;

typedef sequence<> s0;
typedef sequence<int, char> s1;
typedef sequence<int, s, char> s2;

#include <yaul/tml/is_same.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/end.hpp>
#include <yaul/tml/next.hpp>

static_assert(is_same<find<s0, int>::type, end<s0>::type>::value == true, "");
static_assert(is_same<find<s1, double>::type, end<s1>::type>::value == true, "");
static_assert(is_same<find<s1, int>::type, begin<s1>::type>::value == true, "");
static_assert(is_same<find<s1, char>::type, next<begin<s1>::type>::type>::value == true, "");
static_assert(is_same<find<s2, s>::type, next<begin<s2>::type>::type>::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
