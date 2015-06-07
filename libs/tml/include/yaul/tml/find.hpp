// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/find.hpp

/** // doc: yaul/tml/find.hpp {{{
 * \file yaul/tml/find.hpp
 * \brief Provides \ref yaul::tml::find
 */ // }}}
#ifndef YAUL_TML_FIND_HPP
#define YAUL_TML_FIND_HPP

#include <yaul/tml/find_fwd.hpp>
#include <yaul/tml/find_if.hpp>
#include <yaul/tml/same_as.hpp>

namespace yaul { namespace tml {
/** // doc: find {{{
 * \ingroup AlgoQueryGroup
 * \struct find
 * \brief Returns an iterator to the first occurrence of type ``T`` in a
 *        ``Sequence``.
 *
 * \tparam Sequence \ref ForwardSeqConcept, a sequence to search in,
 * \tparam T any type, a type to search for.
 *
 * \par Synopsis
 *
 * \code
 *  template< class Sequence, class T >
 *  struct find
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * <tt>find<Sequence, T>::type</tt> returns an iterator in range
 * <tt>[begin<Sequence>::type, end<Sequence>::type)</tt>  pointing at the first
 * occurence of type ``T`` in ``Sequence`` or, if no such element exists in
 * ``Sequence``, an iterator same as <tt>end<Sequence>::type</tt>.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For a \ref ForwardSeqConcept ``s`` and any type ``t``
 *
 * - **Return type**: <tt>typedef find<s, t>::type i;</tt>
 * - **Semantics**: equivalent to <tt>typedef find_if<s, is_same<_,t> >::type i;</tt>
 *
 * \par Example
 * \snippet yaul/tml/find.cpp Code
 *
 */ // }}}
template <class Sequence, class T>
  struct find
    : find_if<Sequence, same_as<T> >
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_FIND_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
