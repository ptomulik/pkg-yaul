// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/front.hpp

/** // doc: yaul/tml/template_sequence/aux_/front.hpp {{{
 * \file yaul/tml/template_sequence/aux_/front.hpp
 * \brief Implements \ref yaul::tml::front for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_FRONT_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_FRONT_HPP

#include <yaul/tml/front_fwd.hpp>
#include <yaul/tml/variadic/front.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>

namespace yaul { namespace tml {
template <>
  struct front_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
        : apply_sequence<variadic::front, Sequence>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
