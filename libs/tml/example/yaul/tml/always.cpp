// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/always.cpp {{{
 * \file yaul/tml/always.cpp
 * \example yaul/tml/always.cpp
 * \brief Usage example for \ref yaul::tml::always
 */ // }}}

// [Code]
#include <yaul/tml/always.hpp>
#include <yaul/tml/apply.hpp>
#include <yaul/tml/bool.hpp>

using namespace yaul::tml;

typedef always<true_> always_true;

static_assert(apply<always_true,false_>::type::value == true, "");
static_assert(apply<always_true,false_,false_>::type::value == true, "");
static_assert(apply<always_true,false_,false_,false_>::type::value == true, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
