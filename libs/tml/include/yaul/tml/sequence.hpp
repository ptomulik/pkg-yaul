// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/sequence.hpp

/** // doc: yaul/tml/sequence.hpp {{{
 * \file yaul/tml/sequence.hpp
 * \brief Provides \ref yaul::tml::sequence and \ref yaul::tml::sequence_c
 */ // }}}
#ifndef YAUL_TML_SEQUENCE_HPP
#define YAUL_TML_SEQUENCE_HPP

#include <yaul/tml/sequence_fwd.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/sequence_tag_fwd.hpp>

namespace yaul { namespace tml {
/** // doc: sequence {{{
 * \ingroup SeqClassGroup
 * \struct sequence
 * \brief A \ref VariadicTemplateSeqConcept.
 *
 * \todo Write documentation for yaul::tml::sequence.
 *
 * \tparam Args Elements of the sequence.
 *
 * \par Synopsis
 *
 * TODO
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * TODO
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/sequence.cpp Code
 *
 */ // }}}
template <class... Args>
  struct sequence
  {
    typedef sequence type;
  };
/** // doc: sequence_c {{{
 * \ingroup SeqClassGroup
 * \struct sequence_c
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * TODO
 *
 * \par Description
 *
 * TODO
 *
 * \par Expression semantics
 *
 * TODO
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/sequence.cpp Code
 *
 */ // }}}
template <class T, T... Args>
  struct sequence_c
  {
    typedef sequence_c type;
    typedef T value_type;
  };
// We can't just embed the sequence_tag inside of sequence, because the
// property of being "template_sequence" is not inheritable. IOW, this:
//
//  template <class...>
//    struct sequence { typedef aux::template_sequence sequence_tag; }
//  struct f : sequence<int,char> { };
//
//  would be an error, because `f` is not a template (so sequence_tag is
//  wrong).
template<class... Args>
  struct sequence_tag<sequence<Args...> >
  {
    typedef aux::template_sequence_tag type;
  };
template<class T, T... Args>
  struct sequence_tag<sequence_c<T,Args...> >
  {
    typedef aux::template_sequence_tag type;
  };
} } // end namespace yaul::tml

#include <yaul/tml/template_sequence/metafunctions.hpp>
#include <yaul/tml/template_sequence/algorithms.hpp>
#include <yaul/tml/template_sequence/aux_/iterator.hpp>

#endif /* YAUL_TML_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
