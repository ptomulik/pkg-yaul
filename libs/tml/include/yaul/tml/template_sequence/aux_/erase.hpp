// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/erase.hpp

/** // doc: yaul/tml/template_sequence/aux_/erase.hpp {{{
 * \file yaul/tml/template_sequence/aux_/erase.hpp
 * \brief Implements \ref yaul::tml::erase for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_ERASE_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_ERASE_HPP

#include <yaul/tml/erase_fwd.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/variadic/erase.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/sequence_generator.hpp>

namespace yaul { namespace tml {
template <>
  struct erase_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class First, class Last>
      struct apply
        : apply_sequence<
            variadic::erase<
              typename sequence_generator<Sequence>::type
            , typename First::pos
            , typename Last::pos
            >
          , Sequence
          >
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_ERASE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
