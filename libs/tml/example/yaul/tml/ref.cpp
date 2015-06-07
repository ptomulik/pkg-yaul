// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/ref.cpp {{{
 * \file yaul/tml/ref.cpp
 * \example yaul/tml/ref.cpp
 * \brief Usage example for \ref yaul::tml::class
 */ // }}}

// [Code]
#include <yaul/tml/ref.hpp>

using namespace yaul::tml;

struct s1
  {
    typedef int type;
  };
struct s2
  {
    typedef s2 type;
    typedef int value_type;
    static constexpr value_type value = 1;
  };

#include <yaul/tml/is_same.hpp>
static_assert(is_same<ref<int>::type, int>::value, "");
static_assert(is_same<ref<s1>::type, s1>::value, "");
static_assert(is_same<ref<s2>::type, s2>::value, "");
static_assert(is_same<ref<s2>::value_type, int>::value, "");
static_assert(ref<s2>::value == 1, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
