// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/template_sequence/aux_/deref.cpp {{{
 * \file yaul/tml/template_sequence/aux_/deref.cpp
 * \example yaul/tml/template_sequence/aux_/deref.cpp
 * \brief Usage example for \ref yaul::tml::deref_impl<aux::ts_iter_tag>
 */ // }}}

// [Code]
#include <yaul/tml/deref.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/deref.hpp>

using namespace yaul::tml;

template <class...> struct seq { typedef aux::template_sequence_tag sequence_tag; };
template <class Seq, long N>
  struct iter
  {
    typedef aux::ts_iter_tag iterator_tag;
    typedef Seq sequence;
    typedef long_<N> pos;
  };

typedef seq<char,short,int,float> s1;
typedef iter<s1,2> i1;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<deref<i1>::type,int>::value, "");

// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
