// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/if_fwd.hpp

/** // doc: yaul/tml/if_fwd.hpp {{{
 * \file yaul/tml/if_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/if.hpp
 */ // }}}
#ifndef YAUL_TML_IF_FWD_HPP
#define YAUL_TML_IF_FWD_HPP

namespace yaul { namespace tml {
template <class C, class T1, class T2>
  struct if_;
} } // end namespace yaul::tml

#include <yaul/tml/bool_fwd.hpp>
namespace yaul { namespace tml {
template <bool c, class T1, class T2>
  using if_c = if_<bool_<c>,T1,T2>;
} } // end namespace yaul::tml

#endif /* YAUL_TML_IF_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
