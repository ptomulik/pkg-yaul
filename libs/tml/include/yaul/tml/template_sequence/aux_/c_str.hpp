// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/c_str.hpp

/** // doc: yaul/tml/template_sequence/aux_/c_str.hpp {{{
 * \file yaul/tml/template_sequence/aux_/c_str.hpp
 * \brief Implements \ref yaul::tml::c_str for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_C_STR_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_C_STR_HPP

#include <yaul/tml/c_str_fwd.hpp>
#include <yaul/tml/variadic/c_str.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/sequence_generator.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/sequence_generator.hpp>
#include <yaul/tml/enable_if_type.hpp>
#include <yaul/tml/void.hpp>

namespace yaul { namespace tml {
template <>
  struct c_str_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class T>
      struct apply
        : apply_sequence<
              variadic::c_str<T>
            , Sequence
          >
      { };
    template<class Sequence>
      struct apply<
          Sequence
        , typename enable_if_type<typename Sequence::value_type,char>::type
        >
        : apply_sequence<
              variadic::c_str<typename Sequence::value_type>
            , Sequence
          >
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_C_STR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
