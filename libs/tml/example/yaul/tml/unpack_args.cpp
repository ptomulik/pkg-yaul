// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/unpack_args.cpp {{{
 * \file yaul/tml/unpack_args.cpp
 * \example yaul/tml/unpack_args.cpp
 * \brief Usage example for \ref yaul::tml::unpack_args
 */ // }}}

// [Code]
#include <yaul/tml/unpack_args.hpp>
#include <yaul/tml/apply.hpp>
#include <yaul/tml/is_same.hpp>
#include <yaul/tml/placeholders.hpp>
#include <yaul/tml/sequence.hpp>

using namespace yaul::tml;

typedef is_same<_1,_2> f;
static_assert(apply< unpack_args<f>, sequence<int,int> >::type::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
