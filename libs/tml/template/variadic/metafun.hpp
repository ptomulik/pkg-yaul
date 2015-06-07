// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/variadic/xxx.hpp

/** // doc: yaul/tml/variadic/xxx.hpp {{{
 * \file yaul/tml/variadic/xxx.hpp
 * \todo Write documentation
 */ // }}}
#ifndef YAUL_TML_VARIADIC_XXX_HPP
#define YAUL_TML_VARIADIC_XXX_HPP

#include <yaul/tml/variadic/xxx_fwd.hpp>

namespace yaul { namespace tml { namespace variadic {
/** // doc: xxx {{{
 * \ingroup TODO: GroupName
 * \struct xxx
 * \brief TODO: brief description
 *
 * \tparam T TODO parameter description
 *
 * \par Synopsis
 *
 * \code
 *  template< TODO >
 *    struct xxx
 *    {
 *      template< class... Args >
 *        struct apply
 *        {
 *          TODO
 *        };
 *    };
 * \endcode
 *
 * \par Description
 *
 * TODO
 *
 * \par Model of
 *
 * \ref MetafunClassConcept
 *
 * \par Expression semantics
 *
 * TODO
 * \code
 *  typedef xxx< TODO >::apply<a1,...an>::type r;
 * \endcode
 *
 * - **Return type**: TODO
 * - **Semantics**: TODO
 *
 * \par Example
 * \snippet yaul/tml/variadic/xxx.cpp Code
 *
 */ // }}}
template <class T/*TODO: args*/>
  struct xxx;
template <class T/* TODO: args*/>
  template <class... Args>
    struct xxx<T/*TODO: args*/>::apply
    { };
} } } // end namespace yaul::tml::variadic

#endif /* YAUL_TML_VARIADIC_XXX_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
