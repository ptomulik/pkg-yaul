// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/quote_fwd.hpp

/** // doc: yaul/tml/quote_fwd.hpp {{{
 * \file yaul/tml/quote_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/quote.hpp
 */ // }}}
#ifndef YAUL_TML_QUOTE_FWD_HPP
#define YAUL_TML_QUOTE_FWD_HPP

#include <yaul/tml/void.hpp>

namespace yaul { namespace tml {
template <template <class...> class F, class Tag = void_>
  struct quote;
} } // end namespace yaul::tml

#endif /* YAUL_TML_QUOTE_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
