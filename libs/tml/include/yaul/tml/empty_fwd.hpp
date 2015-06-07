// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/empty_fwd.hpp

/** // doc: yaul/tml/empty_fwd.hpp {{{
 * \file yaul/tml/empty_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/empty.hpp
 */ // }}}
#ifndef YAUL_TML_EMPTY_FWD_HPP
#define YAUL_TML_EMPTY_FWD_HPP

namespace yaul { namespace tml {
template <class Tag>
  struct empty_impl
  {
    template<class Sequence>
      struct apply;
  };
template <class Sequence>
  struct empty;
} } // end namespace yaul::tml

#endif /* YAUL_TML_EMPTY_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
