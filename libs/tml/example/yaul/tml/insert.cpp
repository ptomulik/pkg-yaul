// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/insert.cpp {{{
 * \file yaul/tml/insert.cpp
 * \example yaul/tml/insert.cpp
 * \brief Usage example for \ref yaul::tml::insert
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/insert.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/next.hpp>

using namespace yaul::tml;

typedef sequence<char,int,float> s1;
typedef next<begin<s1>::type>::type i1;
typedef insert<s1,i1,short>::type r1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r1,sequence<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
