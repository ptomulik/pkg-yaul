// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/pop_back.cpp {{{
 * \file yaul/tml/variadic/pop_back.cpp
 * \example yaul/tml/variadic/pop_back.cpp
 * \brief Usage example for \ref yaul::tml::yaul::tml::variadic::pop_back
 */ // }}}

// [Code]
#include <yaul/tml/variadic/pop_back.hpp>
#include <yaul/tml/quote.hpp>

using namespace yaul::tml;

template <class... Args> struct seq;

typedef variadic::pop_back<quote<seq> >::apply<char, short, int>::type s1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same< s1, seq<char, short> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
