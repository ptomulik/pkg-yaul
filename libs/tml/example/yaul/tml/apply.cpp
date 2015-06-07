// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/apply.cpp {{{
 * \file yaul/tml/apply.cpp
 * \example yaul/tml/apply.cpp
 * \brief Usage example for \ref yaul::tml::apply
 */ // }}}

// [Code]
#include <yaul/tml/apply.hpp>
#include <yaul/tml/int.hpp>
#include <yaul/tml/placeholders.hpp>

using namespace yaul::tml;

template< class N1, class N2 >
  struct int_plus
    : int_<( N1::value + N2::value )>
  { };

typedef apply< int_plus<_1,_2>, int_<2>, int_<3> >::type r;
static_assert(r::value == 5, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
