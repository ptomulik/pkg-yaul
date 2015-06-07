// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/find_if.hpp

/** // doc: yaul/tml/template_sequence/aux_/find_if.hpp {{{
 * \file yaul/tml/template_sequence/aux_/find_if.hpp
 * \brief Implements \ref yaul::tml::find_if for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_FIND_IF_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_FIND_IF_HPP

#include <yaul/tml/find_if_fwd.hpp>
#include <yaul/tml/variadic/find_if.hpp>
#include <yaul/tml/apply_sequence.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/iterator.hpp>

namespace yaul { namespace tml {
template <>
  struct find_if_impl<aux::template_sequence_tag>
  {
    template<class Sequence, class Pred>
      struct apply
      {
      private:
        static constexpr long s_ = apply_sequence<variadic::find_if<Pred>, Sequence>::value;
      public:
        typedef ts_iter<Sequence, s_> type;
      };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_FIND_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
