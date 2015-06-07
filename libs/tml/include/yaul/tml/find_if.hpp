// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/find_if.hpp

/** // doc: yaul/tml/find_if.hpp {{{
 * \file yaul/tml/find_if.hpp
 * \brief Provides \ref yaul::tml::find_if
 */ // }}}
#ifndef YAUL_TML_FIND_IF_HPP
#define YAUL_TML_FIND_IF_HPP

#include <yaul/tml/find_if_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>

namespace yaul { namespace tml {
/** // doc: find_if {{{
 * \ingroup AlgoQueryGroup
 * \struct find_if
 * \brief Returns an iterator to the first element in `Sequence` that satisfies
 *        the predicate `Pred`
 *
 * \tparam Sequence \ref ForwardSeqConcept, a sequence to search in,
 * \tparam Pred unarty \ref LambdaExprConcept, a search condition
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence, class Pred >
 *  struct find_if
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * <tt>find_if<Sequence, Pred>::type</tt> returns an iterator to the first
 * element of `Sequence` that satisfies the predicate `Pred`. If no such
 * element is found, the metafunction returns a past-the-end iterator. For
 * empty sequences it always returns the past-the-end iterator.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardSeqConcept `s` and an unary \ref LambdaExprConcept `pred`
 *
 * - **Return type**: <tt>typedef find_if<s, pred>::type i;</tt>
 * - **Semantics**: `i` is the first iterator in the range
 *   <tt>[begin<s>::type, end<s>::type)</tt> such that
 *   <tt>apply<pred, deref<i>::type>::type::value == true</tt>. If no such
 *   element is found, `i` is identical to <tt>end<s>::type</tt>.
 *
 * \par Example
 * \snippet yaul/tml/find_if.cpp Code
 *
 */ // }}}
template <class Sequence, class Pred>
  struct find_if
    : find_if_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence, Pred>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_FIND_IF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
