// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/back.hpp

/** // doc: yaul/tml/back.hpp {{{
 * \file yaul/tml/back.hpp
 * \brief Provides \ref yaul::tml::back
 */ // }}}
#ifndef YAUL_TML_BACK_HPP
#define YAUL_TML_BACK_HPP

#include <yaul/tml/back_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>
#include <yaul/tml/apply_sequence.hpp>

namespace yaul { namespace tml {
/** // doc: back {{{
 * \ingroup SeqIntrGroup
 * \struct back
 * \brief Returns the last element in the sequence
 *
 * \tparam Sequence A sequence to be examined. \ref BidirSeqConcept
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the last element in the sequence.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref BidirSeqConcept `s`
 * \code
 *  typedef back<s>::type t;
 * \endcode
 *
 * - **Return type**: A type
 * - **Precondition**:
 *   \code
 *    empty<s>::value == false
 *   \endcode
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef deref< prior< end<s>::type >::type >::type t;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/back.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct back
    : back_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_BACK_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
