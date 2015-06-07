// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/apply_sequence.cpp {{{
 * \file yaul/tml/apply_sequence.cpp
 * \example yaul/tml/apply_sequence.cpp
 * \brief Usage example for \ref yaul::tml::apply_sequence
 */ // }}}

// [Code]
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/quote.hpp>

using namespace yaul::tml;

template <class... > struct seq2;
typedef sequence<char,short,int,float> s1;
typedef apply_sequence<quote<seq2>,s1>::type r1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r1, seq2<char,short,int,float> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
