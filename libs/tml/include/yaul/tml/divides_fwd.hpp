// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/divides_fwd.hpp

/** // doc: yaul/tml/divides_fwd.hpp {{{
 * \file yaul/tml/divides_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/divides.hpp
 */ // }}}
#ifndef YAUL_TML_DIVIDES_FWD_HPP
#define YAUL_TML_DIVIDES_FWD_HPP

namespace yaul { namespace tml {
template <class Tag1, class Tag2, class... Tags>
  struct divides_impl
  {
    template<class T1, class T2, class... Ts>
      struct apply;
  };
template <class T1, class T2, class... Ts>
  struct divides;
} } // end namespace yaul::tml

#endif /* YAUL_TML_DIVIDES_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
