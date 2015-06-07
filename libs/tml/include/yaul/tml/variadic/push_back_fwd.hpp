// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/push_back_fwd.hpp

/** // doc: yaul/tml/variadic/push_back_fwd.hpp {{{
 * \file yaul/tml/variadic/push_back_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/variadic/push_back.hpp
 */ // }}}
#ifndef YAUL_TML_VARIADIC_PUSH_BACK_FWD_HPP
#define YAUL_TML_VARIADIC_PUSH_BACK_FWD_HPP

namespace yaul { namespace tml { namespace variadic {
template <class F, class A>
  struct push_back
  {
    template<class... Args>
      struct apply;
  };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_PUSH_BACK_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4: