// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/empty.hpp

/** // doc: yaul/tml/template_sequence/aux_/empty.hpp {{{
 * \file yaul/tml/template_sequence/aux_/empty.hpp
 * \brief Implements \ref yaul::tml::empty for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP

#include <yaul/tml/empty_fwd.hpp>
#include <yaul/tml/variadic/empty.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>

namespace yaul { namespace tml {
template <>
  struct empty_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
        : apply_sequence<variadic::empty, Sequence>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_EMPTY_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
