// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/integral_c/aux_/negate.hpp

/** // doc: yaul/tml/integral_c/aux_/negate.hpp {{{
 * \file yaul/tml/integral_c/aux_/negate.hpp
 * \brief Implements \ref yaul::tml::negate for \ref IntConstConcept
 */ // }}}
#ifndef YAUL_TML_INTEGRAL_C_AUX_NEGATE_HPP
#define YAUL_TML_INTEGRAL_C_AUX_NEGATE_HPP

#include <yaul/tml/negate_fwd.hpp>
#include <yaul/tml/integral_c_tag.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml {
template <>
  struct negate_impl<integral_c_tag>
  {
    template<class A>
      struct apply
        : integral_c<typename A::value_type, (- A::value)>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_INTEGRAL_C_AUX_NEGATE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
