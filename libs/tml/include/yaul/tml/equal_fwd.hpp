// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/equal_fwd.hpp

/** // doc: yaul/tml/equal_fwd.hpp {{{
 * \file yaul/tml/equal_fwd.hpp
 * \brief Forward declarations for \ref yaul/tml/equal.hpp
 */ // }}}
#ifndef YAUL_TML_EQUAL_FWD_HPP
#define YAUL_TML_EQUAL_FWD_HPP

#include <yaul/tml/is_same_fwd.hpp>
#include <yaul/tml/placeholders.hpp>

namespace yaul { namespace tml {
template <class Sequence1, class Sequence2, class Predicate = is_same<_1,_2> >
  struct equal;
} } // end namespace yaul::tml

#endif /* YAUL_TML_EQUAL_FWD_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
