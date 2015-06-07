// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/insert.hpp

/** // doc: yaul/tml/template_sequence/aux_/insert.hpp {{{
 * \file yaul/tml/template_sequence/aux_/insert.hpp
 * \brief Implements \ref yaul::tml::insert for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP

#include <yaul/tml/insert_fwd.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/variadic/insert.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/sequence_generator.hpp>

namespace yaul { namespace tml {
template <>
  struct insert_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class Pos, class T>
      struct apply
        : apply_sequence<
            variadic::insert<
              typename sequence_generator<Sequence>::type
            , typename Pos::pos
            , T
            >
          , Sequence
          >
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_INSERT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
