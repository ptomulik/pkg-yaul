// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/pop_front.hpp

/** // doc: yaul/tml/pop_front.hpp {{{
 * \file yaul/tml/pop_front.hpp
 * \brief Provides \ref yaul::tml::pop_front
 */ // }}}
#ifndef YAUL_TML_POP_FRONT_HPP
#define YAUL_TML_POP_FRONT_HPP

#include <yaul/tml/pop_front_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: pop_front {{{
 * \ingroup SeqIntrGroup
 * \struct pop_front
 * \brief Remove first element from a sequence
 *
 * \tparam Sequence A sequence to erase the first element from.
 *         \ref FrontExtensibleSeqConcept
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct pop_front
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `pop_front` performs a removal at the beginning of the sequence with
 * guaranteed `O(1)` complexity.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref FrontExtensibleSeqConcept `s`:
 * \code
 *  typedef pop_front<s>::type r;
 * \endcode
 *
 * - **Return type**: \ref FrontExtensibleSeqConcept.
 * - **Precondition**:
 *   \code
 *    empty<s>::value == false
 *   \endcode
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef erase<s,begin<s>::type>::type r;
 *   \endcode
 * - **Postcondition**:
 *   \code
 *    size<r>::value == size<s>::value - 1
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/pop_front.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct pop_front
    : pop_front_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_POP_FRONT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
