// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/advance.cpp {{{
 * \file yaul/tml/advance.cpp
 * \example yaul/tml/advance.cpp
 * \brief Usage example for \ref yaul::tml::class
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/advance.hpp>
#include <yaul/tml/begin.hpp>
#include <yaul/tml/deref.hpp>
#include <yaul/tml/long.hpp>

using namespace yaul::tml;

typedef sequence<char,short,int,float> s1;
typedef advance<begin<s1>::type,long_<2> >::type i1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<deref<i1>::type, int>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
