// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/end.hpp

/** // doc: yaul/tml/end.hpp {{{
 * \file yaul/tml/end.hpp
 * \brief Provides \ref yaul::tml::end
 */ // }}}
#ifndef YAUL_TML_END_HPP
#define YAUL_TML_END_HPP

#include <yaul/tml/end_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: end {{{
 * \ingroup SeqIntrGroup
 * \struct end
 * \brief Returns the sequence's past-the-end iterator
 *
 * \tparam Sequence A sequence whose end iterator will be returned.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct end
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the sequence's past-the-end iterator.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For a \ref ForwardSeqConcept `s`.
 * \code
 *  typedef end<s>::type last;
 * \endcode
 *
 * - **Return type**: \ref ForwardIterConcept
 * - **Semantics**: `last` is an iterator pointing one past the last element in
 *   `s`
 * - **Postcondition**: `last` is past-the-end.
 *
 * \par Example
 * \snippet yaul/tml/end.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct end
    : end_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_END_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
