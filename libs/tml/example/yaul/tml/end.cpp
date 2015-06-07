// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/end.cpp {{{
 * \file yaul/tml/end.cpp
 * \example yaul/tml/end.cpp
 * \brief Usage example for \ref yaul::tml::end
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/end.hpp>

using namespace yaul::tml;

typedef sequence<> s0;
typedef end<s0>::type e0; // ensure, that end works on empty sequences

#include <yaul/tml/deref.hpp>
#include <yaul/tml/prior.hpp>

typedef sequence<char,short,int,float> s1;
typedef end<s1>::type e1;
typedef deref<prior<e1>::type>::type last1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<last1, float>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
