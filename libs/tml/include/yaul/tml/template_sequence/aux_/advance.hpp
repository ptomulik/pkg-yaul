// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/advance.hpp

/** // doc: yaul/tml/template_sequence/aux_/advance.hpp {{{
 * \file yaul/tml/template_sequence/aux_/advance.hpp
 * \brief Implements \ref yaul::tml::advance for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP

#include <yaul/tml/advance_fwd.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/iterator.hpp>

namespace yaul { namespace tml {
template <>
  struct advance_impl<aux::ts_iter_tag>
  {
    template<class Iterator, class N>
      struct apply
        : Iterator::template advance<N::value>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_ADVANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
