// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/sequence_generator.cpp {{{
 * \file yaul/tml/sequence_generator.cpp
 * \example yaul/tml/sequence_generator.cpp
 * \brief Usage example for \ref yaul::tml::sequence_generator
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/apply.hpp>

using namespace yaul::tml;

typedef sequence<char,short,int,float> s1;
typedef apply<sequence_generator<s1>::type, int, float, void>::type r1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r1, sequence<int, float, void> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
