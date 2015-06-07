// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/variadic/erase_back.cpp {{{
 * \file yaul/tml/variadic/erase_back.cpp
 * \example yaul/tml/variadic/erase_back.cpp
 * \brief Usage example for \ref yaul::tml::variadic::erase_back
 */ // }}}

// [Code]
#include <yaul/tml/variadic/erase_back.hpp>
#include <yaul/tml/quote.hpp>
#include <yaul/tml/int.hpp>

using namespace yaul::tml;

template <class... Args> struct seq;

typedef variadic::erase_back_c<quote<seq>, 2>::apply<char, short, int, float>::type t2;
typedef variadic::erase_back<quote<seq>, int_<3> >::apply<char, short, int, float>::type t3;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<t2,seq<char,short> >::value, "");
static_assert(is_same<t3,seq<char,short,int> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
