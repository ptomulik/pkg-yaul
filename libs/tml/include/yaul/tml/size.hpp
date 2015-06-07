// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/size.hpp

/** // doc: yaul/tml/size.hpp {{{
 * \file yaul/tml/size.hpp
 * \brief Provides \ref yaul::tml::size
 */ // }}}
#ifndef YAUL_TML_SIZE_HPP
#define YAUL_TML_SIZE_HPP

#include <yaul/tml/size_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: size {{{
 * \ingroup SeqIntrGroup
 * \struct size
 * \brief Returns the number of elements in sequence
 *
 * \tparam Sequence A sequence to query. \ref ForwardSeqConcept
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence >
 *  struct size
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `size` returns the number of elements in the `Sequence`, that is, the number
 * of elements in the range `[begin<Sequence>:: type, end<Sequence>:: type)`.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardSeqConcept `s`:
 * \code
 *  typedef size<s>::type n;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef distance< begin<s>::type, end<s>::type >::type n;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/size.cpp Code
 *
 */ // }}}
template <class Sequence>
  struct size
    : size_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_SIZE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
