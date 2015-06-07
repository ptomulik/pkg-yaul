// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/lambda.cpp {{{
 * \file yaul/tml/lambda.cpp
 * \example yaul/tml/lambda.cpp
 * \brief Usage example for \ref yaul::tml::lambda
 */ // }}}

// [Code]
#include <yaul/tml/int.hpp>
#include <yaul/tml/placeholders.hpp>
#include <yaul/tml/lambda.hpp>

using namespace yaul::tml;

template< class N1, class N2 >
  struct int_plus
    : int_<( N1::value + N2::value )>
  { };

template <class F>
  struct wrap
    : F
  { };
typedef lambda< int_plus<_1, int_<42> > >::type f1;
typedef lambda< wrap< int_plus< _1, int_<42> > > >::type f2;

static_assert(f1::apply<int_<42> >::type::value == 84, "");
static_assert(f2::apply<int_<42> >::type::value == 84, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
