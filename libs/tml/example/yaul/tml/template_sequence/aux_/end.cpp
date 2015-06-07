// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/template_sequence/aux_/end.cpp {{{
 * \file yaul/tml/template_sequence/aux_/end.cpp
 * \example yaul/tml/template_sequence/aux_/end.cpp
 * \brief Usage example for \ref yaul::tml::end_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <yaul/tml/end.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/end.hpp>

using namespace yaul::tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };

typedef seq<char,short,int,float> s1;
typedef end<s1>::type e1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<e1::sequence, s1 >::value, "");
static_assert(is_same<e1::pos, long_<4l> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
