// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/bitxor.hpp

/** // doc: yaul/tml/bitxor.hpp {{{
 * \file yaul/tml/bitxor.hpp
 * \brief Provides \ref yaul::tml::bitxor_
 */ // }}}
#ifndef YAUL_TML_BITXOR_HPP
#define YAUL_TML_BITXOR_HPP

#include <yaul/tml/bitxor_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: bitxor_ {{{
 * \ingroup MetafunBitOpsGroup
 * \struct bitxor_
 * \brief Bitwise xor
 *
 * \tparam T1 First argument. \ref IntConstConcept.
 * \tparam T2 Second argument. \ref IntConstConcept.
 * \tparam Ts Other arguments (optional).
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T1
 *      , class T2
 *      , class... Ts
 *      >
 *  struct bitxor_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of bitwise xor (^) operation on its arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary \ref IntConstConcept "Integral Constants" t1, t2,... tn:
 * \code
 *  typedef bitxor_<t1,t2,...tn>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to:
 *   \code
 *    typedef integral_c<
 *          decltype(c1::value ^ c2::value ^ ... cn::value)
 *        , (c1::value ^ c2::value ^ ... cn::value)
 *        > c;
 *   \endcode
 *
 * \code
 *  typedef bitxor_<t1,t2,...tn> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : bitxor_<t1,t2,...tn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/bitxor.cpp Code
 *
 */ // }}}
template <class T1, class T2, class... Ts>
  struct bitxor_
    : bitxor_impl<
        typename numeric_tag<T1>::type
      , typename numeric_tag<T2>::type
      , typename numeric_tag<Ts>::type...
      >::template apply<T1,T2,Ts...>
  {
  };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/bitxor.hpp>

#endif /* YAUL_TML_BITXOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
