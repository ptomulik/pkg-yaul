// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/end.hpp

/** // doc: yaul/tml/template_sequence/aux_/end.hpp {{{
 * \file yaul/tml/template_sequence/aux_/end.hpp
 * \brief Implements \ref yaul::tml::end for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_END_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_END_HPP

#include <yaul/tml/end_fwd.hpp>
#include <yaul/tml/size.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/template_sequence/aux_/iterator.hpp>
#include <yaul/tml/template_sequence/aux_/size.hpp>

namespace yaul { namespace tml {
template <>
  struct end_impl<aux::template_sequence_tag>
  {
    template<class Sequence>
      struct apply
      {
      private:
        static constexpr long s_ = static_cast<long>(size<Sequence>::value);
      public:
        typedef ts_iter<Sequence,s_> type;
      };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_END_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
