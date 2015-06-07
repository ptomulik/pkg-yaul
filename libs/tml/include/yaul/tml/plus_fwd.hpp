// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/plus_fwd.hpp

/** // doc: yaul/tml/plus_fwd.hpp {{{
 * \file yaul/tml/plus_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/plus.hpp
 */ // }}}
#ifndef YAUL_TML_PLUS_FWD_HPP
#define YAUL_TML_PLUS_FWD_HPP

namespace yaul { namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct plus_impl
  {
    template<class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct plus;
} } // end namespace yaul::tml

#endif /* YAUL_TML_PLUS_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
