// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/deref.hpp

/** // doc: yaul/tml/template_sequence/aux_/deref.hpp {{{
 * \file yaul/tml/template_sequence/aux_/deref.hpp
 * \brief Implements \ref yaul::tml::deref for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP

#include <yaul/tml/deref_fwd.hpp>
#include <yaul/tml/at.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/at.hpp>

namespace yaul { namespace tml {
template <>
  struct deref_impl<aux::ts_iter_tag>
  {
    template<class Iterator>
      struct apply
        : at<typename Iterator::sequence, typename Iterator::pos>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_DEREF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
