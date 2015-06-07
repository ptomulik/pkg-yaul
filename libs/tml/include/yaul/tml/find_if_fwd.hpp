// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/find_if_fwd.hpp

/** // doc: yaul/tml/find_if_fwd.hpp {{{
 * \file yaul/tml/find_if_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/find_if.hpp
 */ // }}}
#ifndef YAUL_TML_FIND_IF_FWD_HPP
#define YAUL_TML_FIND_IF_FWD_HPP

namespace yaul { namespace tml {
template <class Tag>
  struct find_if_impl
  {
    template<class Sequence, class Pred>
      struct apply;
  };
template <class Sequence, class Pred>
  struct find_if;
} } // end namespace yaul::tml

#endif /* YAUL_TML_FIND_IF_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
