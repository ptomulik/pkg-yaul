// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/begin.hpp

/** // doc: yaul/tml/begin.hpp {{{
 * \file yaul/tml/begin.hpp
 * \brief Provides \ref yaul::tml::begin
 */ // }}}
#ifndef YAUL_TML_BEGIN_HPP
#define YAUL_TML_BEGIN_HPP

#include <yaul/tml/begin_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: begin {{{
 * \ingroup SeqIntrGroup
 * \struct begin
 * \brief Returns an iterator pointing to the first element of the sequence.
 *
 * \tparam Sequence A sequence whose begin iterator will be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< typename Sequence >
 *  struct begin
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns an iterator that points to the first element of the sequence.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For an arbitrary \ref ForwardSeqConcept `s`
 * \code
 *  typedef begin<s>::type first;
 * \endcode
 *
 * - **Return type**: \ref ForwardIterConcept
 * - **Semantics**: `first` is an iterator pointing to the first element of `s`
 * - **Postcondition**: `first` is either dereferenceable or past-the-end;
 *   it is past-the-end if and only if `size<s>:: value == 0`.
 *
 * \par Example
 * \snippet yaul/tml/begin.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct begin
    : begin_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_BEGIN_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
