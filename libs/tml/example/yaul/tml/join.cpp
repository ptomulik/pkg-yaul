// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/join.cpp {{{
 * \file yaul/tml/join.cpp
 * \example yaul/tml/join.cpp
 * \brief Usage example for \ref yaul::tml::join
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/join.hpp>

using namespace yaul::tml;

typedef sequence<char,short> s1;
typedef sequence<int,float> s2;
typedef join<s1,s2>::type r12;
typedef join<s2,s1>::type r21;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r12, sequence<char,short,int,float> >::value , "");
static_assert(is_same<r21, sequence<int,float,char,short> >::value , "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
