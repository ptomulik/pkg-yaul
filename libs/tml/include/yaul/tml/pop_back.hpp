// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/pop_back.hpp

/** // doc: yaul/tml/pop_back.hpp {{{
 * \file yaul/tml/pop_back.hpp
 * \brief Provides \ref yaul::tml::pop_back
 */ // }}}
#ifndef YAUL_TML_POP_BACK_HPP
#define YAUL_TML_POP_BACK_HPP

#include <yaul/tml/pop_back_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: pop_back {{{
 * \ingroup SeqIntrGroup
 * \struct pop_back
 * \brief Removes last element from sequence
 *
 * \tparam Sequence A sequence to erase the last element from.
 *         \ref BackExtensibleSeqConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct pop_back
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `pop_back` performs a removal at the end of the sequence with guaranteed
 * `O(1)` complexity.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref BackExtensibleSeqConcept `s`:
 * \code
 *  typedef pop_back<s>::type r;
 * \endcode
 *
 * - **Return type**: \ref BackExtensibleSeqConcept.
 * - **Precondition**:
 *   \code
 *    empty<s>::value == false;
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    erase<s,end<s>::type>::type;
 *   \endcode
 * - **Postcondition**:
 *   \code
 *    size<r>::value == size<s>::value - 1
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/pop_back.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct pop_back
    : pop_back_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_POP_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
