// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

/** // doc: yaul/tml/protect.cpp {{{
 * \file yaul/tml/protect.cpp
 * \example yaul/tml/protect.cpp
 * \brief Usage example for \ref yaul::tml::protect
 */ // }}}

// [Code]
#include <yaul/tml/protect.hpp>
#include <yaul/tml/bind.hpp>
#include <yaul/tml/quote.hpp>
#include <yaul/tml/apply_wrap.hpp>
#include <yaul/tml/bool.hpp>
#include <yaul/tml/placeholders.hpp>

using namespace yaul::tml;

struct f
{
  template< class T1, class T2 > struct apply
  {
    typedef T2 type;
  };
};

typedef bind< quote<if_>,_1,_2,bind<f,_1,_2> > b1;
typedef bind< quote<if_>,_1,_2,protect< bind<f,_1,_2> > > b2;

typedef apply_wrap< b1,false_,char >::type r1;
typedef apply_wrap< b2,false_,char >::type r2;

#include <yaul/tml/is_same.hpp>
static_assert(is_same<r1,char>::value, "");
static_assert(is_same<r2,protect< bind<f,_1,_2> > >::value, "");
// [Code]

int main() { return 0; }

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
