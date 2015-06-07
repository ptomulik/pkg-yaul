// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/or.hpp

/** // doc: yaul/tml/or.hpp {{{
 * \file yaul/tml/or.hpp
 * \brief Provides \ref yaul::tml::or_
 */ // }}}
#ifndef YAUL_TML_OR_HPP
#define YAUL_TML_OR_HPP

#include <yaul/tml/or_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: or_ {{{
 * \ingroup MetafunLogicOpsGroup
 * \struct or_
 * \brief Logical or
 *
 * \tparam F1 First argument. Nullary \ref MetafunConcept.
 * \tparam F2 Second argument. Nullary \ref MetafunConcept.
 * \tparam Fs Other arguments (optional).
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class F1
 *      , class F2
 *      , class... Fs
 *      >
 *  struct or_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of short-circuit logical or (||) operation on its
 * arguments.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary nullary \ref MetafunConcept f1, f2,... fn:
 * \code
 *  typedef or_<f1,f2,...,fn>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: `r` is `true_` if either of
 *   \code
 *    f1::type::value, f2::type::value, ...fn::type::value
 *   \endcode
 *   expressions evaluated to `true`, and `false_` otherwise;
 *
 * \code
 *  typedef or_<f1,f2,...fn> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : or_<f1,f2,...,fn>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/or.cpp Code
 *
 */ // }}}
template <class F1, class F2, class... Fs>
  struct or_
    : or_impl<
        typename numeric_tag<F1>::type
      , typename numeric_tag<F2>::type
      , typename numeric_tag<Fs>::type...
      >::template apply<F1,F2,Fs...>
  {
  };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/or.hpp>

#endif /* YAUL_TML_OR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
