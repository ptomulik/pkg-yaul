// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/same_as.hpp

/** // doc: yaul/tml/same_as.hpp {{{
 * \file yaul/tml/same_as.hpp
 * \brief Provides \ref yaul::tml::same_as
 */ // }}}
#ifndef YAUL_TML_SAME_AS_HPP
#define YAUL_TML_SAME_AS_HPP

#include <yaul/tml/same_as_fwd.hpp>
#include <yaul/tml/is_same.hpp>
#include <yaul/tml/not.hpp>

namespace yaul { namespace tml {
/** // doc: same_as {{{
 * \ingroup MetafunComparisonsGroup
 * \struct same_as
 * \brief \ref MetafunClassConcept for type comparison
 *
 * \tparam T1 first type to be compared,
 * \tparam T2 second type to be compared.
 *
 * \par Synopsis
 *
 * \code
 *  template< class T1 >
 *  struct same_as
 *  {
 *    template< class T2 >
 *    struct apply
 *    {
 *      typedef unspecified type;
 *    };
 *  };
 * \endcode
 *
 * \par Description
 *
 * This \ref MetafunClassConcept is thought to be used as
 * a type-comparing \ref LambdaExprConcept.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any two types `T1` and `T2`
 *
 * - **Return type**: <tt>typedef same_as<T1>::apply<T2>::type c;</tt>
 * - **Semantics**: equivalent to <tt>typedef is_same<T1, T2>::type c;</tt>
 *
 * \par Example
 * \snippet yaul/tml/same_as.cpp Code
 *
 */ // }}}
template <class T1>
  struct same_as
    {
      template <class T2>
        struct apply
          : is_same<T1, T2>
        { };
    };
/** // doc: not_same_as {{{
 * \ingroup MetafunComparisonsGroup
 * \struct not_same_as
 * \brief \ref MetafunClassConcept for type comparison
 *
 * \tparam T1 first type to be compared,
 * \tparam T2 second type to be compared.
 *
 * \par Synopsis
 *
 * \code
 *  template< class T1 >
 *  struct not_same_as
 *  {
 *    template< class T2 >
 *    struct apply
 *    {
 *      typedef unspecified type;
 *    };
 *  };
 * \endcode
 *
 * \par Description
 *
 * This \ref MetafunClassConcept is thought to be used as
 * a type-comparing \ref LambdaExprConcept.
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * For any two types `T1` and `T2`
 *
 * - **Return type**: <tt>typedef not_same_as<T1>::apply<T2>::type c;</tt>
 * - **Semantics**: equivalent to <tt>typedef not_<is_same<T1, T2> >::type c;</tt>
 *
 * \par Example
 * \snippet yaul/tml/same_as.cpp Code
 *
 */ // }}}
template <class T1>
  struct not_same_as
    {
      template <class T2>
        struct apply
          : not_<is_same<T1, T2> >
        { };
    };
} } // end namespace yaul::tml

#endif /* YAUL_TML_SAME_AS_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
