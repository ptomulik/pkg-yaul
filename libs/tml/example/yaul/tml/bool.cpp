// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/bool.cpp {{{
 * \file yaul/tml/bool.cpp
 * \example yaul/tml/bool.cpp
 * \brief Usage example for \ref yaul::tml::bool_
 */ // }}}

// [Code]
#include <yaul/tml/bool.hpp>

using namespace yaul::tml;

typedef bool_<false> f;

#include <yaul/tml/is_same.hpp>
static_assert( is_same<f::value_type, bool>::value, "");
static_assert( is_same<f::type, f>::value, "");
static_assert( f::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
