// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/is_placeholder.cpp {{{
 * \file yaul/tml/is_placeholder.cpp
 * \example yaul/tml/is_placeholder.cpp
 * \brief Usage example for \ref yaul::tml::is_placeholder
 */ // }}}

// [Code]
#include <yaul/tml/is_placeholder.hpp>
#include <yaul/tml/placeholders.hpp>

struct X {};
struct Y;

using namespace yaul::tml;

static_assert(!is_placeholder<int>::value, "");
static_assert(!is_placeholder<X>::value, "");
static_assert(!is_placeholder<Y>::value, "");
static_assert( is_placeholder<arg<1> >::value, "");
static_assert( is_placeholder<_1>::value, "");
static_assert( is_placeholder<_>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
