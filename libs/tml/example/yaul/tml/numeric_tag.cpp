// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/numeric_tag.cpp {{{
 * \file yaul/tml/numeric_tag.cpp
 * \example yaul/tml/numeric_tag.cpp
 * \brief Usage example for \ref yaul::tml::numeric_tag
 */ // }}}

// [Code]
#include <yaul/tml/numeric_tag.hpp>
#include <yaul/tml/integral_c_tag.hpp>

using namespace yaul::tml;

template <int I> struct num { typedef integral_c_tag numeric_tag; };
typedef numeric_tag<num<2> >::type t;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<t, integral_c_tag>::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
