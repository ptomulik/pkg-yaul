// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/find_if.cpp {{{
 * \file yaul/tml/find_if.cpp
 * \example yaul/tml/find_if.cpp
 * \brief Usage example for \ref yaul::tml::find_if
 */ // }}}

// [Code]
#include <yaul/tml/find_if.hpp>

using namespace yaul::tml;

#include <yaul/tml/greater.hpp>
#include <yaul/tml/placeholders.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/is_same.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/end.hpp>
#include <yaul/tml/next.hpp>

typedef greater<_1, int_<0> > positive;

typedef sequence<> s0;
typedef sequence<int_<1>, int_<0> > s1;
typedef sequence<int_<0>, int_<1> > s2;
typedef sequence<int_<-1>, int_<0> > s3;

static_assert(is_same<find_if<s0, positive>::type, end<s0>::type>::value, "");
static_assert(is_same<find_if<s1, positive>::type, begin<s1>::type>::value, "");
static_assert(is_same<find_if<s2, positive>::type, next<begin<s2>::type>::type>::value, "");
static_assert(is_same<find_if<s3, positive>::type, end<s3>::type>::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
