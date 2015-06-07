// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/push_back.cpp {{{
 * \file yaul/tml/push_back.cpp
 * \example yaul/tml/push_back.cpp
 * \brief Usage example for \ref yaul::tml::push_back
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/push_back.hpp>

using namespace yaul::tml;

typedef sequence<char,short,int> s1;
typedef push_back<s1,float>::type r1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r1, sequence<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
