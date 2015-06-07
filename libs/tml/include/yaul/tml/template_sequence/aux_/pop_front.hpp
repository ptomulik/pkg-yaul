// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/pop_front.hpp

/** // doc: yaul/tml/template_sequence/aux_/pop_front.hpp {{{
 * \file yaul/tml/template_sequence/aux_/pop_front.hpp
 * \brief Implements \ref yaul::tml::pop_front for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_POP_FRONT_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_POP_FRONT_HPP

#include <yaul/tml/pop_front_fwd.hpp>
#include <yaul/tml/variadic/pop_front.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/sequence_generator.hpp>

namespace yaul { namespace tml {
template <>
  struct pop_front_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
        : apply_sequence<
            variadic::pop_front<typename sequence_generator<Sequence>::type>
          , Sequence
          >
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_POP_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
