// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/template_sequence/aux_/distance.cpp {{{
 * \file yaul/tml/template_sequence/aux_/distance.cpp
 * \example yaul/tml/template_sequence/aux_/distance.cpp
 * \brief Usage example for \ref yaul::tml::distance_impl<aux::template_sequence_tag>
 */ // }}}

// [Code]
#include <yaul/tml/distance.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/distance.hpp>

using namespace yaul::tml;

template <long N>
  struct iter
  {
    typedef aux::ts_iter_tag iterator_tag;
    typedef long_<N> pos;
  };

typedef iter<1l> i1;
typedef iter<3l> i3;

static_assert(distance<i1,i3>::value == 2, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
