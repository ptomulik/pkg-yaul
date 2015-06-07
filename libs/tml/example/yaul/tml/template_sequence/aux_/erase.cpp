// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/template_sequence/aux_/erase.cpp {{{
 * \file yaul/tml/template_sequence/aux_/erase.cpp
 * \example yaul/tml/template_sequence/aux_/erase.cpp
 * \brief Usage example for \ref yaul::tml::erase_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <yaul/tml/erase.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/erase.hpp>

using namespace yaul::tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };
template <class S, long N>
  struct iter
  {
    typedef aux::ts_iter_tag iterator_tag;
    typedef long_<N> pos;
  };

typedef seq<char,short,int,float> s1;
typedef iter<s1,1l> i1;
typedef iter<s1,3l> i3;
typedef erase<s1,i1,i3>::type s2;

#include <yaul/tml/is_same.hpp>

static_assert(is_same<s2, seq<char,float> >::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
