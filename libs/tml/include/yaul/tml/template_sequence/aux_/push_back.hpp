// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/push_back.hpp

/** // doc: yaul/tml/template_sequence/aux_/push_back.hpp {{{
 * \file yaul/tml/template_sequence/aux_/push_back.hpp
 * \brief Implements \ref yaul::tml::push_back for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_PUSH_BACK_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_PUSH_BACK_HPP

#include <yaul/tml/push_back_fwd.hpp>
#include <yaul/tml/variadic/push_back.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/sequence_generator.hpp>

namespace yaul { namespace tml {
template <>
  struct push_back_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class T>
      struct apply
        : apply_sequence<
            variadic::push_back<typename sequence_generator<Sequence>::type, T>
          , Sequence
          >
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_PUSH_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
