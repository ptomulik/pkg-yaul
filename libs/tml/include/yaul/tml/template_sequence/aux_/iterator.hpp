// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/iterator.hpp

/** // doc: yaul/tml/template_sequence/aux_/iterator.hpp {{{
 * \file yaul/tml/template_sequence/aux_/iterator.hpp
 * \brief Defines \ref TemplateSeqConcept iterator.
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_ITERATOR_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_ITERATOR_HPP

#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>

namespace yaul { namespace tml {
template <class Sequence, long N>
  struct ts_iter
  {
    typedef aux::ts_iter_tag iterator_tag;
    typedef Sequence sequence;

    static constexpr long prior_ = N - 1;
    static constexpr long next_ = N + 1;
    static constexpr long pos_ = N;

    typedef long_<pos_> pos;
    typedef ts_iter<Sequence,next_> next;
    typedef ts_iter<Sequence,prior_> prior;

    template<long I>
      struct advance
      {
        typedef ts_iter<Sequence, N + I> type;
      };
  };
} } // end namespace yaul::tml

#include <yaul/tml/template_sequence/aux_/distance.hpp>
#include <yaul/tml/template_sequence/aux_/advance.hpp>
#include <yaul/tml/template_sequence/aux_/deref.hpp>

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_ITERATOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
