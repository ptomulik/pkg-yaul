// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/find_fwd.hpp

/** // doc: yaul/tml/variadic/find_fwd.hpp {{{
 * \file yaul/tml/variadic/find_fwd.hpp
 * \brief Forward declarations for yaul/tml/variadic/find.hpp
 */ // }}}
#ifndef YAUL_TML_VARIADIC_FIND_FWD_HPP
#define YAUL_TML_VARIADIC_FIND_FWD_HPP

namespace yaul { namespace tml { namespace variadic {
template <class T>
  struct find
  {
    template <class...>
      struct apply;
  };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_FIND_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
