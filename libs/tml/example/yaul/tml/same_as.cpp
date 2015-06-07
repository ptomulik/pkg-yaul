// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/same_as.cpp {{{
 * \file yaul/tml/same_as.cpp
 * \example yaul/tml/same_as.cpp
 * \brief Usage example for \ref yaul::tml::same_as and \ref yaul::tml::not_same_as
 */ // }}}

// [Code]
#include <yaul/tml/same_as.hpp>

using namespace yaul::tml;

struct s;

static_assert(same_as<int>::apply<int>::type::value == true, "");
static_assert(same_as<s>::apply<s>::type::value == true, "");
static_assert(same_as<s>::apply<int>::type::value == false, "");
static_assert(not_same_as<s>::apply<int>::type::value == true, "");
static_assert(not_same_as<void>::apply<char>::type::value == true, "");
static_assert(not_same_as<double>::apply<double>::type::value == false, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
