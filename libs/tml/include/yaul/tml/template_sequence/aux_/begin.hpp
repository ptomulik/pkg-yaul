// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/begin.hpp

/** // doc: yaul/tml/template_sequence/aux_/begin.hpp {{{
 * \file yaul/tml/template_sequence/aux_/begin.hpp
 * \brief Implements \ref yaul::tml::begin for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP

#include <yaul/tml/begin_fwd.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/iterator.hpp>

namespace yaul { namespace tml {
template <>
  struct begin_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
      {
        typedef ts_iter<Sequence,0l> type;
      };
  };
} } // end namespace tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_BEGIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
