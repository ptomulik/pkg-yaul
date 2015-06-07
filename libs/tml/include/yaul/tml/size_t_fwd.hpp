// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/size_t_fwd.hpp

/** // doc: yaul/tml/size_t_fwd.hpp {{{
 * \file yaul/tml/size_t_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/size_t.hpp
 */ // }}}
#ifndef YAUL_TML_SIZE_T_FWD_HPP
#define YAUL_TML_SIZE_T_FWD_HPP

#include <yaul/tml/integral_c_fwd.hpp>
#include <cstddef>

namespace yaul { namespace tml {
template <std::size_t n>
  using size_t_ = integral_c<std::size_t,n>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_SIZE_T_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
