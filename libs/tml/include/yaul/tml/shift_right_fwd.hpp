// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/shift_right_fwd.hpp

/** // doc: yaul/tml/shift_right_fwd.hpp {{{
 * \file yaul/tml/shift_right_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/shift_right.hpp
 */ // }}}
#ifndef YAUL_TML_SHIFT_RIGHT_FWD_HPP
#define YAUL_TML_SHIFT_RIGHT_FWD_HPP

namespace yaul { namespace tml {
template <class Tag1, class Tag2>
  struct shift_right_impl
  {
    template <class F1, class Shift>
      struct apply;
  };
template <class F1, class Shift>
  struct shift_right;
} } // end namespace yaul::tml

#endif /* YAUL_TML_SHIFT_RIGHT_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
