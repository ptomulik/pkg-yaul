// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/erase_fwd.hpp

/** // doc: yaul/tml/variadic/erase_fwd.hpp {{{
 * \file yaul/tml/variadic/erase_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/variadic/erase.hpp
 */ // }}}
#ifndef YAUL_TML_VARIADIC_ERASE_FWD_HPP
#define YAUL_TML_VARIADIC_ERASE_FWD_HPP

namespace yaul { namespace tml { namespace variadic {
template <class F, class First, class Last>
  struct erase
  {
    template <class...>
      struct apply;
  };
template <class F, long First, long Last>
  struct erase_c
  {
    template <class...>
      struct apply;
  };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_ERASE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
