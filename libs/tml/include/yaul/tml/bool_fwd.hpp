// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/bool_fwd.hpp

/** // doc: yaul/tml/bool_fwd.hpp {{{
 * \file yaul/tml/bool_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/bool.hpp
 */ // }}}
#ifndef YAUL_TML_BOOL_FWD_HPP
#define YAUL_TML_BOOL_FWD_HPP

#include <yaul/tml/integral_c_fwd.hpp>

namespace yaul { namespace tml {
template <bool C>
  using bool_ = integral_c<bool,C>;
using true_ = bool_<true>;
using false_ = bool_<false>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_BOOL_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
