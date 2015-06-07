// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/insert_fwd.hpp

/** // doc: yaul/tml/variadic/insert_fwd.hpp {{{
 * \file yaul/tml/variadic/insert_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/variadic/insert.hpp
 */ // }}}
#ifndef YAUL_TML_VARIADIC_INSERT_FWD_HPP
#define YAUL_TML_VARIADIC_INSERT_FWD_HPP

namespace yaul { namespace tml { namespace variadic {
template <class F, class Pos, class T>
  struct insert
  {
    template <class...>
      struct apply;
  };
template <class F, long Pos, class T>
  struct insert_c
  {
    template <class...>
      struct apply;
  };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_INSERT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
