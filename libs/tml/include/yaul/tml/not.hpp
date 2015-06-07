// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/or.hpp

/** // doc: yaul/tml/not.hpp {{{
 * \file yaul/tml/not.hpp
 * \brief Provides \ref yaul::tml::not_
 */ // }}}
#ifndef YAUL_TML_NOT_HPP
#define YAUL_TML_NOT_HPP

#include <yaul/tml/not_fwd.hpp>
#include <yaul/tml/numeric_tag.hpp>

namespace yaul { namespace tml {
/** // doc: not_ {{{
 * \ingroup MetafunLogicOpsGroup
 * \struct not_
 * \brief Logical not
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
 *  struct not_
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * Returns the result of logical not (!) operation on its argument.
 *
 * \par Model of
 *
 * \ref NumericMetafunConcept
 *
 * \par Expression semantics
 *
 * For arbitrary nullary \ref MetafunConcept `f`:
 * \code
 *  typedef not_<f>::type r;
 * \endcode
 *
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef bool_<!f::type::value) > r;
 *   \endcode
 *
 * \code
 *  typedef not_<f> r;
 * \endcode
 * - **Return type**: \ref IntConstConcept
 * - **Semantics**: Equivalent to
 *   \code
 *    struct r : not_<f>::type {};
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/not.cpp Code
 *
 */ // }}}
template <class F>
  struct not_
    : not_impl<typename numeric_tag<F>::type>::template apply<F>
  {
  };
} } // end namespace yaul::tml

#include <yaul/tml/aux_/not.hpp>

#endif /* YAUL_TML_NOT_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
