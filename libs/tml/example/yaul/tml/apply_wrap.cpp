// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/apply_wrap.cpp {{{
 * \file yaul/tml/apply_wrap.cpp
 * \example yaul/tml/apply_wrap.cpp
 * \brief Usage example for \ref yaul::tml::apply_wrap
 */ // }}}

// [Code]
#include <yaul/tml/apply_wrap.hpp>
#include <yaul/tml/is_same.hpp>

struct T0;
struct F0
  {
    // non-template
    struct apply { typedef T0 type; };
  };

template <class...> struct Tn;
struct Fn
  {
    // template
    template <class...Args>
      struct apply { typedef Tn<Args...> type; };
  };

using namespace yaul::tml;
static_assert(is_same<apply_wrap<F0>::type, T0>::value, "");
static_assert(is_same<apply_wrap<Fn>::type, Tn<> >::value, "");
static_assert(is_same<apply_wrap<Fn,int>::type, Tn<int> >::value, "");
static_assert(is_same<apply_wrap<Fn,int,char>::type, Tn<int,char> >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
