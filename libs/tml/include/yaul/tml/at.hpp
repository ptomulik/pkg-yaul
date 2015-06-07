// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/at.hpp

/** // doc: yaul/tml/at.hpp {{{
 * \file yaul/tml/at.hpp
 * \brief Provides \ref yaul::tml::at
 */ // }}}
#ifndef YAUL_TML_AT_HPP
#define YAUL_TML_AT_HPP

#include <yaul/tml/at_fwd.hpp>
#include <yaul/tml/sequence_tag.hpp>
#include <yaul/tml/long.hpp>

namespace yaul { namespace tml {
/** // doc: at {{{
 * \ingroup SeqIntrGroup
 * \struct at
 * \brief Returns an N-th element from the beginning of a sequence.
 *
 * \tparam Sequence A \ref ForwardSeqConcept to retrieve the element from.
 * \tparam N An offset from the beginning of the sequence specifying the
 *         element to be retrieved. \ref IntConstConcept.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Sequence
 *      , class N
 *    >
 *  struct at
 *  {
 *    typedef unsecified type;
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * `at` returns N-th element from the beginning of the `Sequence`.
 *
 * \par Expression semantics
 *
 * For `s` being a sequence, `x` being its n-th element and an
 * \ref IntConstConcept `n`
 *
 * \code
 *  typedef at<s,n> r;
 * \endcode
 * - **Return type**: Unspecified
 * - **Semantics**: equivalent to
 *   \code
 *    typedef ref<x> r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/at.cpp Code
 *
 */ // }}}
template <class Sequence, class N>
  struct at
    : at_impl<typename sequence_tag<Sequence>::type>
        ::template apply<Sequence,N>
  { };
/** // doc: at_c {{{
 * \ingroup  SeqIntrGroup
 * \struct at_c
 * \brief Returns a type identical to
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
 * \snippet yaul/tml/at.cpp Code
 *
 */ // }}}
template <class Sequence, long N>
  struct at_c
    : at<Sequence, long_<N> >
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_AT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
