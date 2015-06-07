// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/distance.hpp

/** // doc: yaul/tml/distance.hpp {{{
 * \file yaul/tml/distance.hpp
 * \brief Provides \ref yaul::tml::distance
 */ // }}}
#ifndef YAUL_TML_DISTANCE_HPP
#define YAUL_TML_DISTANCE_HPP

#include <yaul/tml/distance_fwd.hpp>
#include <yaul/tml/iterator_tag.hpp>

namespace yaul { namespace tml {
/** // doc: distance {{{
 * \ingroup IterMetafunGroup
 * \struct distance
 * \brief Returns distance between iterators.
 *
 * \tparam First First iterator. \ref ForwardIterConcept.
 * \tparam Last Second iterator. \ref ForwardIterConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class First
 *      , class Last
 *      >
 *  struct distance
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the distance between `First` and `Last` iterators, that is, an \ref
 * IntConstConcept `n` such that `advance<First,n>:: type` is identical to
 * `Last`.
 *
 * \par Model of
 *
 * \ref TagDispatchedMetafunConcept
 *
 * \par Expression semantics
 *
 * For any \ref ForwardIterConcept "Forward Iterators" `first` and `last`
 * \code
 *  typedef distance<first,last>::type n;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Precondition**: `[first,last)` is a valid range.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef iter_fold<
 *          iterator_range<first,last>
 *        , long_<0>
 *        , next<_1>
 *    >::type n;
 *   \endcode
 * - **Postcondition**:
 *   \code
 *    is_same< advance<first,n>::type, last >::value == true
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/distance.cpp Code
 *
 */ // }}}
template <class First, class Last>
  struct distance
    : distance_impl<typename iterator_tag<First>::type>
        ::template apply<First, Last>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_DISTANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
